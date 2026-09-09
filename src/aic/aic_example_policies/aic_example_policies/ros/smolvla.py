import cv2
#
#  Copyright (C) 2026 Intrinsic Innovation LLC
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

import os

os.environ["HF_HUB_ENABLE_HF_TRANSFER"] = "1"
os.environ.setdefault("PYTORCH_CUDA_ALLOC_CONF", "expandable_segments:True")

import time
import sys
import json
import torch
import threading
import numpy as np
import draccus
from pathlib import Path
from typing import Dict
from rclpy.node import Node
from rclpy.lifecycle import State, TransitionCallbackReturn
from geometry_msgs.msg import Twist, Vector3

from aic_model.policy import (
    GetObservationCallback,
    MoveRobotCallback,
    Policy,
    SendFeedbackCallback,
)
from aic_model_interfaces.msg import Observation
from aic_task_interfaces.msg import Task

from aic_control_interfaces.msg import (
    MotionUpdate,
    TrajectoryGenerationMode,
)
from geometry_msgs.msg import Wrench

# LeRobot SmolVLA & Safetensors
import lerobot.policies.smolvla.modeling_smolvla as smolvla_module

SmolVLAPolicy = smolvla_module.SmolVLAPolicy
from lerobot.policies.smolvla.configuration_smolvla import SmolVLAConfig
from safetensors.torch import load_file


class RunSmolVLA(Policy):
    def __init__(self, parent_node: Node = None, checkpoint_path: str = None):
        super().__init__(parent_node)
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.checkpoint_path = checkpoint_path
        
        self.is_configured = False
        self.is_loading = False
        self.load_error = None
        self.loading_thread = None

        # Half precision configuration
        self.use_fp16 = self.device.type == "cuda"
        self.compute_dtype = torch.float16 if self.use_fp16 else torch.float32

        # Spawn background loading immediately on instantiation
        self._start_async_loading()

    def _start_async_loading(self):
        """Launches model weight and config loading in a background thread."""
        if self.is_configured or self.is_loading:
            return
        self.is_loading = True
        
        def _thread_target():
            try:
                self._configure_policy()
            except Exception as e:
                self.load_error = e
                if self.get_logger():
                    self.get_logger().error(f"SmolVLA background loading failed: {e}")
            finally:
                self.is_loading = False

        self.loading_thread = threading.Thread(target=_thread_target, daemon=True)
        self.loading_thread.start()

    def _configure_policy(self):
        """Core policy and model loading sequence executed by background thread."""
        if self.is_configured:
            return

        if self.checkpoint_path is None:
            policy_path = Path(
                "/home/radhae/ws_aic/src/aic/outputs/train/smolvla_aug_9_9:20/checkpoints/last/pretrained_model"
            )
        else:
            policy_path = Path(self.checkpoint_path)

        # 1. Load Config
        with open(policy_path / "config.json", "r") as f:
            config_dict = json.load(f)
            if "type" in config_dict:
                del config_dict["type"]

        config.num_layers = 16  # Reduce VLM transformer layers for faster loading

        config._name_or_path = "HuggingFaceTB/SmolVLM2-500M-Video-Instruct"

        # 2. Instantiate Policy Architecture & Load Weights
        self.policy = SmolVLAPolicy(config)

        merged_weights_path = policy_path / "model.safetensors"
        adapter_weights_path = policy_path / "adapter_model.safetensors"

        if merged_weights_path.exists():
            self.policy.load_state_dict(load_file(merged_weights_path), strict=False)
        elif adapter_weights_path.exists():
            self.policy.load_state_dict(load_file(adapter_weights_path), strict=False)
        else:
            raise FileNotFoundError(
                f"No model weights found in {policy_path} (checked model.safetensors and adapter_model.safetensors)"
            )

        self.policy.eval()
        self.policy.to(self.device)

        # 3. Load Normalization Stats
        stats_path = (
            policy_path / "policy_preprocessor_step_5_normalizer_processor.safetensors"
        )
        if not stats_path.exists():
            stats_path = policy_path / "policy_preprocessor.safetensors"
        if not stats_path.exists():
            raise FileNotFoundError(
                f"No normalizer stats file found in {policy_path}"
            )

        stats = load_file(stats_path)

        def get_stat(key, shape):
            t = stats[key].to(self.device).view(*shape)
            return t.to(self.compute_dtype)

        self.img_stats = {
            "camera1": {
                "mean": get_stat("observation.images.camera1.mean", (1, 3, 1, 1)),
                "std": get_stat("observation.images.camera1.std", (1, 3, 1, 1)),
            },
            "camera2": {
                "mean": get_stat("observation.images.camera2.mean", (1, 3, 1, 1)),
                "std": get_stat("observation.images.camera2.std", (1, 3, 1, 1)),
            },
            "camera3": {
                "mean": get_stat("observation.images.camera3.mean", (1, 3, 1, 1)),
                "std": get_stat("observation.images.camera3.std", (1, 3, 1, 1)),
            },
        }

        self.state_mean = get_stat("observation.state.mean", (1, -1))
        self.state_std = get_stat("observation.state.std", (1, -1))
        self.action_mean = get_stat("action.mean", (1, -1))
        self.action_std = get_stat("action.std", (1, -1))

        self.image_scaling = 0.15
        self.task_prompt = (
            "insert the network interface card (NIC) cable into the slot"
        )
        self.is_configured = True

        if self.get_logger():
            self.get_logger().info(
                f"SmolVLA Policy configured successfully on {self.device} "
                f"(fp16={self.use_fp16}) from {policy_path}"
            )

    # -------------------------------------------------------------------------
    # Lifecycle Transition Handlers (Non-blocking responses)
    # -------------------------------------------------------------------------
    def on_configure(self, state: State) -> TransitionCallbackReturn:
        if self.get_logger():
            self.get_logger().info("SmolVLA handling lifecycle transition: configure")
        
        # Check if loading thread threw an exception
        if self.load_error:
            if self.get_logger():
                self.get_logger().error(f"Configuration failed during loading: {self.load_error}")
            return TransitionCallbackReturn.FAILURE

        # Instantly return success so ROS 2 lifecycle transition doesn't timeout
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        if self.get_logger():
            self.get_logger().info("SmolVLA handling lifecycle transition: activate")
        return TransitionCallbackReturn.SUCCESS

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        if self.get_logger():
            self.get_logger().info("SmolVLA handling lifecycle transition: deactivate")
        if torch.cuda.is_available():
            torch.cuda.empty_cache()
        return TransitionCallbackReturn.SUCCESS

    def on_cleanup(self, state: State) -> TransitionCallbackReturn:
        if self.get_logger():
            self.get_logger().info("SmolVLA handling lifecycle transition: cleanup")
        self.is_configured = False
        for attr in ("policy", "img_stats", "state_mean", "state_std",
                     "action_mean", "action_std"):
            if hasattr(self, attr):
                delattr(self, attr)
        if torch.cuda.is_available():
            torch.cuda.empty_cache()
        return TransitionCallbackReturn.SUCCESS

    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        if self.get_logger():
            self.get_logger().info("SmolVLA handling lifecycle transition: shutdown")
        if torch.cuda.is_available():
            torch.cuda.empty_cache()
        return TransitionCallbackReturn.SUCCESS

    # -------------------------------------------------------------------------
    # Inference Helpers & Execution Loop
    # -------------------------------------------------------------------------
    def _img_to_tensor(
        self,
        raw_img,
        device: torch.device,
        scale: float,
        mean: torch.Tensor,
        std: torch.Tensor,
    ) -> torch.Tensor:
        img_np = np.frombuffer(raw_img.data, dtype=np.uint8).reshape(
            raw_img.height, raw_img.width, 3
        )

        actual_scale = 1.0 if raw_img.width <= 320 else scale
        if actual_scale != 1.0:
            img_np = cv2.resize(
                img_np,
                None,
                fx=actual_scale,
                fy=actual_scale,
                interpolation=cv2.INTER_AREA,
            )

        tensor = (
            torch.from_numpy(img_np)
            .permute(2, 0, 1)
            .to(self.compute_dtype)
            .div(255.0)
            .unsqueeze(0)
            .to(device)
        )

        return (tensor - mean) / std

    def prepare_observations(self, obs_msg: Observation) -> Dict[str, torch.Tensor]:
        obs = {
            "observation.images.camera1": self._img_to_tensor(
                obs_msg.left_image,
                self.device,
                self.image_scaling,
                self.img_stats["left"]["mean"],
                self.img_stats["left"]["std"],
            ),
            "observation.images.camera2": self._img_to_tensor(
                obs_msg.center_image,
                self.device,
                self.image_scaling,
                self.img_stats["center"]["mean"],
                self.img_stats["center"]["std"],
            ),
            "observation.images.camera3": self._img_to_tensor(
                obs_msg.right_image,
                self.device,
                self.image_scaling,
                self.img_stats["right"]["mean"],
                self.img_stats["right"]["std"],
            ),
        }

        tcp_pose = obs_msg.controller_state.tcp_pose
        tcp_vel = obs_msg.controller_state.tcp_velocity

        state_np = np.array(
            [
                tcp_pose.position.x,
                tcp_pose.position.y,
                tcp_pose.position.z,
                tcp_pose.orientation.x,
                tcp_pose.orientation.y,
                tcp_pose.orientation.z,
                tcp_pose.orientation.w,
                tcp_vel.linear.x,
                tcp_vel.linear.y,
                tcp_vel.linear.z,
                tcp_vel.angular.x,
                tcp_vel.angular.y,
                tcp_vel.angular.z,
                *obs_msg.controller_state.tcp_error,
                *obs_msg.joint_states.position[:7],
            ],
            dtype=np.float32,
        )

        raw_state_tensor = (
            torch.from_numpy(state_np).to(self.compute_dtype).unsqueeze(0).to(self.device)
        )
        obs["observation.state"] = (
            raw_state_tensor - self.state_mean
        ) / self.state_std

        obs["task"] = [self.task_prompt]
        return obs

    def insert_cable(
        self,
        task: Task,
        get_observation: GetObservationCallback,
        move_robot: MoveRobotCallback,
        send_feedback: SendFeedbackCallback,
        **kwargs,
    ):
        # Synchronize: block loop execution until background loading finishes
        if self.is_loading and self.loading_thread:
            if self.get_logger():
                self.get_logger().info("Waiting for SmolVLA background weight loading to complete...")
            self.loading_thread.join()

        if not self.is_configured:
            if self.get_logger():
                self.get_logger().error("Policy failed to configure properly.")
            return False

        self.policy.reset()
        if self.get_logger():
            self.get_logger().info(
                f"RunSmolVLA.insert_cable() enter. Task prompt: '{self.task_prompt}'"
            )

        start_time = time.time()

        while time.time() - start_time < 30.0:
            loop_start = time.time()

            observation_msg = get_observation()
            if observation_msg is None:
                if self.get_logger():
                    self.get_logger().info("No observation received.")
                continue

            obs_tensors = self.prepare_observations(observation_msg)

            with torch.inference_mode():
                normalized_action = self.policy.select_action(obs_tensors)

            raw_action_tensor = (
                normalized_action * self.action_std
            ) + self.action_mean
            action = raw_action_tensor[0].float().cpu().numpy()

            if self.get_logger():
                self.get_logger().info(f"Action: {action}")

            twist = Twist(
                linear=Vector3(
                    x=float(action[0]), y=float(action[1]), z=float(action[2])
                ),
                angular=Vector3(
                    x=float(action[3]), y=float(action[4]), z=float(action[5])
                ),
            )
            motion_update = self.set_cartesian_twist_target(twist)
            move_robot(motion_update=motion_update)
            send_feedback("SmolVLA NIC insertion in progress...")

            elapsed = time.time() - loop_start
            time.sleep(max(0, 0.25 - elapsed))

        if self.get_logger():
            self.get_logger().info("RunSmolVLA.insert_cable() exiting...")
        return True

    def set_cartesian_twist_target(self, twist: Twist, frame_id: str = "base_link"):
        motion_update_msg = MotionUpdate()
        motion_update_msg.velocity = twist
        motion_update_msg.header.frame_id = frame_id
        motion_update_msg.header.stamp = self.get_clock().now().to_msg()

        motion_update_msg.target_stiffness = np.diag(
            [100.0, 100.0, 100.0, 50.0, 50.0, 50.0]
        ).flatten()
        motion_update_msg.target_damping = np.diag(
            [40.0, 40.0, 40.0, 15.0, 15.0, 15.0]
        ).flatten()

        motion_update_msg.feedforward_wrench_at_tip = Wrench(
            force=Vector3(x=0.0, y=0.0, z=0.0), torque=Vector3(x=0.0, y=0.0, z=0.0)
        )

        motion_update_msg.wrench_feedback_gains_at_tip = [0.5, 0.5, 0.5, 0.0, 0.0, 0.0]

        motion_update_msg.trajectory_generation_mode.mode = (
            TrajectoryGenerationMode.MODE_VELOCITY
        )

        return motion_update_msg


run_smolvla = RunSmolVLA
smolvla = RunSmolVLA