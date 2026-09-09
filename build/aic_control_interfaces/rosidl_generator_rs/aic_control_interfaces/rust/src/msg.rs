#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to aic_control_interfaces__msg__ControllerState
/// Current state of the AIC Controller which includes the computed cartesian and joint commands

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControllerState {
    /// Header
    pub header: std_msgs::msg::Header,

    /// Current tcp pose.
    pub tcp_pose: geometry_msgs::msg::Pose,

    /// Current tcp velocity.
    pub tcp_velocity: geometry_msgs::msg::Twist,

    /// Reference tcp pose.
    pub reference_tcp_pose: geometry_msgs::msg::Pose,

    /// Pose error from current to target tool pose in the form of (x,y,z,rx,ry,rz)
    pub tcp_error: [f64; 6],

    /// Reference joint state commands
    pub reference_joint_state: trajectory_msgs::msg::JointTrajectoryPoint,

    /// Current mode for target execution
    pub target_mode: super::msg::TargetMode,

    /// Tare offset for force torque sensor.
    /// header.frame_id: The reference coordinate frame of the tare values.
    pub fts_tare_offset: geometry_msgs::msg::WrenchStamped,

}



impl Default for ControllerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControllerState::default())
  }
}

impl rosidl_runtime_rs::Message for ControllerState {
  type RmwMsg = super::msg::rmw::ControllerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        tcp_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.tcp_pose)).into_owned(),
        tcp_velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.tcp_velocity)).into_owned(),
        reference_tcp_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.reference_tcp_pose)).into_owned(),
        tcp_error: msg.tcp_error,
        reference_joint_state: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.reference_joint_state)).into_owned(),
        target_mode: super::msg::TargetMode::into_rmw_message(std::borrow::Cow::Owned(msg.target_mode)).into_owned(),
        fts_tare_offset: geometry_msgs::msg::WrenchStamped::into_rmw_message(std::borrow::Cow::Owned(msg.fts_tare_offset)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        tcp_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tcp_pose)).into_owned(),
        tcp_velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tcp_velocity)).into_owned(),
        reference_tcp_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reference_tcp_pose)).into_owned(),
        tcp_error: msg.tcp_error,
        reference_joint_state: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reference_joint_state)).into_owned(),
        target_mode: super::msg::TargetMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_mode)).into_owned(),
        fts_tare_offset: geometry_msgs::msg::WrenchStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fts_tare_offset)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      tcp_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.tcp_pose),
      tcp_velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.tcp_velocity),
      reference_tcp_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.reference_tcp_pose),
      tcp_error: msg.tcp_error,
      reference_joint_state: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.reference_joint_state),
      target_mode: super::msg::TargetMode::from_rmw_message(msg.target_mode),
      fts_tare_offset: geometry_msgs::msg::WrenchStamped::from_rmw_message(msg.fts_tare_offset),
    }
  }
}


// Corresponds to aic_control_interfaces__msg__JointMotionUpdate
/// Command the robot to a target joint state.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointMotionUpdate {
    /// The target joint configuration including set points for positions,
    /// velocities, accelerations, and efforts.
    pub target_state: trajectory_msgs::msg::JointTrajectoryPoint,

    /// Stiffness and damping both evolve from a current value toward these target
    /// ones. This avoids sudden jumps when the values are changed.
    /// Specify for each joint.
    pub target_stiffness: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_damping: Vec<f64>,

    /// The mode of trajectory generation.
    pub trajectory_generation_mode: super::msg::TrajectoryGenerationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_feedforward_torque: Vec<f64>,

}



impl Default for JointMotionUpdate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointMotionUpdate::default())
  }
}

impl rosidl_runtime_rs::Message for JointMotionUpdate {
  type RmwMsg = super::msg::rmw::JointMotionUpdate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_state: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.target_state)).into_owned(),
        target_stiffness: msg.target_stiffness.into(),
        target_damping: msg.target_damping.into(),
        trajectory_generation_mode: super::msg::TrajectoryGenerationMode::into_rmw_message(std::borrow::Cow::Owned(msg.trajectory_generation_mode)).into_owned(),
        target_feedforward_torque: msg.target_feedforward_torque.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_state: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_state)).into_owned(),
        target_stiffness: msg.target_stiffness.as_slice().into(),
        target_damping: msg.target_damping.as_slice().into(),
        trajectory_generation_mode: super::msg::TrajectoryGenerationMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trajectory_generation_mode)).into_owned(),
        target_feedforward_torque: msg.target_feedforward_torque.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_state: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.target_state),
      target_stiffness: msg.target_stiffness
          .into_iter()
          .collect(),
      target_damping: msg.target_damping
          .into_iter()
          .collect(),
      trajectory_generation_mode: super::msg::TrajectoryGenerationMode::from_rmw_message(msg.trajectory_generation_mode),
      target_feedforward_torque: msg.target_feedforward_torque
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to aic_control_interfaces__msg__MotionUpdate
/// Command the robot to a target cartesian state.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionUpdate {
    /// Header
    pub header: std_msgs::msg::Header,

    /// Note: These targets are used according to the trajectory_generation_mode specified below.
    /// Pose target.
    pub pose: geometry_msgs::msg::Pose,

    /// Velocity target.
    pub velocity: geometry_msgs::msg::Twist,

    /// Impedance matrices for Cartesian impedance control.
    /// 6x6 row-major matrix
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub target_stiffness: [f64; 36],

    /// 6x6 row-major matrix
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub target_damping: [f64; 36],


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedforward_wrench_at_tip: geometry_msgs::msg::Wrench,

    /// Feedback gains of force feedback control. These gains must be in [0, 0.95]
    /// to minimize risk of instability.
    pub wrench_feedback_gains_at_tip: [f64; 6],

    /// The mode of trajectory generation.
    pub trajectory_generation_mode: super::msg::TrajectoryGenerationMode,

}



impl Default for MotionUpdate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionUpdate::default())
  }
}

impl rosidl_runtime_rs::Message for MotionUpdate {
  type RmwMsg = super::msg::rmw::MotionUpdate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        target_stiffness: msg.target_stiffness,
        target_damping: msg.target_damping,
        feedforward_wrench_at_tip: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.feedforward_wrench_at_tip)).into_owned(),
        wrench_feedback_gains_at_tip: msg.wrench_feedback_gains_at_tip,
        trajectory_generation_mode: super::msg::TrajectoryGenerationMode::into_rmw_message(std::borrow::Cow::Owned(msg.trajectory_generation_mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        target_stiffness: msg.target_stiffness,
        target_damping: msg.target_damping,
        feedforward_wrench_at_tip: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedforward_wrench_at_tip)).into_owned(),
        wrench_feedback_gains_at_tip: msg.wrench_feedback_gains_at_tip,
        trajectory_generation_mode: super::msg::TrajectoryGenerationMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trajectory_generation_mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.velocity),
      target_stiffness: msg.target_stiffness,
      target_damping: msg.target_damping,
      feedforward_wrench_at_tip: geometry_msgs::msg::Wrench::from_rmw_message(msg.feedforward_wrench_at_tip),
      wrench_feedback_gains_at_tip: msg.wrench_feedback_gains_at_tip,
      trajectory_generation_mode: super::msg::TrajectoryGenerationMode::from_rmw_message(msg.trajectory_generation_mode),
    }
  }
}


// Corresponds to aic_control_interfaces__msg__TargetMode
/// There are two types of target modes.
///   1. target_mode = MODE_CARTESIAN
///      The controller will process Cartesian targets of type 'MotionUpdate' and 
///      ignore other target types
///   2. target_mode = MODE_JOINT
///      The controller will process joint targets of type 'JointMotionUpdate' and 
///      ignore other target types.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl TargetMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNSPECIFIED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CARTESIAN: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_JOINT: u8 = 2;

}


impl Default for TargetMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TargetMode::default())
  }
}

impl rosidl_runtime_rs::Message for TargetMode {
  type RmwMsg = super::msg::rmw::TargetMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


// Corresponds to aic_control_interfaces__msg__TrajectoryGenerationMode
/// There are two ways that input targets can be provided for the MotionUpdate message.
///   1. mode = MODE_VELOCITY
///      In this case, a target velocity must be provided. The target pose
///      will be ignored.
///   2. mode = MODE_POSITION
///      In this case, a target pose must be provided. The target velocity
///      will be ignored.
/// Notes that messages with mode set to MODE_UNSPECIFIED will be ignored.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryGenerationMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl TrajectoryGenerationMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNSPECIFIED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_VELOCITY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_POSITION: u8 = 2;

}


impl Default for TrajectoryGenerationMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectoryGenerationMode::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryGenerationMode {
  type RmwMsg = super::msg::rmw::TrajectoryGenerationMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


