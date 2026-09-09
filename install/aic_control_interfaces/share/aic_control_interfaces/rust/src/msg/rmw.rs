#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__ControllerState() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__msg__ControllerState__init(msg: *mut ControllerState) -> bool;
    fn aic_control_interfaces__msg__ControllerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControllerState>, size: usize) -> bool;
    fn aic_control_interfaces__msg__ControllerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControllerState>);
    fn aic_control_interfaces__msg__ControllerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControllerState>, out_seq: *mut rosidl_runtime_rs::Sequence<ControllerState>) -> bool;
}

// Corresponds to aic_control_interfaces__msg__ControllerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Current state of the AIC Controller which includes the computed cartesian and joint commands

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControllerState {
    /// Header
    pub header: std_msgs::msg::rmw::Header,

    /// Current tcp pose.
    pub tcp_pose: geometry_msgs::msg::rmw::Pose,

    /// Current tcp velocity.
    pub tcp_velocity: geometry_msgs::msg::rmw::Twist,

    /// Reference tcp pose.
    pub reference_tcp_pose: geometry_msgs::msg::rmw::Pose,

    /// Pose error from current to target tool pose in the form of (x,y,z,rx,ry,rz)
    pub tcp_error: [f64; 6],

    /// Reference joint state commands
    pub reference_joint_state: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// Current mode for target execution
    pub target_mode: super::super::msg::rmw::TargetMode,

    /// Tare offset for force torque sensor.
    /// header.frame_id: The reference coordinate frame of the tare values.
    pub fts_tare_offset: geometry_msgs::msg::rmw::WrenchStamped,

}



impl Default for ControllerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__msg__ControllerState__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__msg__ControllerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControllerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__ControllerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__ControllerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__ControllerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControllerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControllerState where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/msg/ControllerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__ControllerState() }
  }
}


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__JointMotionUpdate() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__msg__JointMotionUpdate__init(msg: *mut JointMotionUpdate) -> bool;
    fn aic_control_interfaces__msg__JointMotionUpdate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointMotionUpdate>, size: usize) -> bool;
    fn aic_control_interfaces__msg__JointMotionUpdate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointMotionUpdate>);
    fn aic_control_interfaces__msg__JointMotionUpdate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointMotionUpdate>, out_seq: *mut rosidl_runtime_rs::Sequence<JointMotionUpdate>) -> bool;
}

// Corresponds to aic_control_interfaces__msg__JointMotionUpdate
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Command the robot to a target joint state.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointMotionUpdate {
    /// The target joint configuration including set points for positions,
    /// velocities, accelerations, and efforts.
    pub target_state: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// Stiffness and damping both evolve from a current value toward these target
    /// ones. This avoids sudden jumps when the values are changed.
    /// Specify for each joint.
    pub target_stiffness: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_damping: rosidl_runtime_rs::Sequence<f64>,

    /// The mode of trajectory generation.
    pub trajectory_generation_mode: super::super::msg::rmw::TrajectoryGenerationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_feedforward_torque: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for JointMotionUpdate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__msg__JointMotionUpdate__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__msg__JointMotionUpdate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointMotionUpdate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__JointMotionUpdate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__JointMotionUpdate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__JointMotionUpdate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointMotionUpdate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointMotionUpdate where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/msg/JointMotionUpdate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__JointMotionUpdate() }
  }
}


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__MotionUpdate() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__msg__MotionUpdate__init(msg: *mut MotionUpdate) -> bool;
    fn aic_control_interfaces__msg__MotionUpdate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionUpdate>, size: usize) -> bool;
    fn aic_control_interfaces__msg__MotionUpdate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionUpdate>);
    fn aic_control_interfaces__msg__MotionUpdate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionUpdate>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionUpdate>) -> bool;
}

// Corresponds to aic_control_interfaces__msg__MotionUpdate
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Command the robot to a target cartesian state.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionUpdate {
    /// Header
    pub header: std_msgs::msg::rmw::Header,

    /// Note: These targets are used according to the trajectory_generation_mode specified below.
    /// Pose target.
    pub pose: geometry_msgs::msg::rmw::Pose,

    /// Velocity target.
    pub velocity: geometry_msgs::msg::rmw::Twist,

    /// Impedance matrices for Cartesian impedance control.
    /// 6x6 row-major matrix
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub target_stiffness: [f64; 36],

    /// 6x6 row-major matrix
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub target_damping: [f64; 36],


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedforward_wrench_at_tip: geometry_msgs::msg::rmw::Wrench,

    /// Feedback gains of force feedback control. These gains must be in [0, 0.95]
    /// to minimize risk of instability.
    pub wrench_feedback_gains_at_tip: [f64; 6],

    /// The mode of trajectory generation.
    pub trajectory_generation_mode: super::super::msg::rmw::TrajectoryGenerationMode,

}



impl Default for MotionUpdate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__msg__MotionUpdate__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__msg__MotionUpdate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionUpdate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__MotionUpdate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__MotionUpdate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__MotionUpdate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionUpdate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionUpdate where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/msg/MotionUpdate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__MotionUpdate() }
  }
}


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__TargetMode() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__msg__TargetMode__init(msg: *mut TargetMode) -> bool;
    fn aic_control_interfaces__msg__TargetMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TargetMode>, size: usize) -> bool;
    fn aic_control_interfaces__msg__TargetMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TargetMode>);
    fn aic_control_interfaces__msg__TargetMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TargetMode>, out_seq: *mut rosidl_runtime_rs::Sequence<TargetMode>) -> bool;
}

// Corresponds to aic_control_interfaces__msg__TargetMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// There are two types of target modes.
///   1. target_mode = MODE_CARTESIAN
///      The controller will process Cartesian targets of type 'MotionUpdate' and 
///      ignore other target types
///   2. target_mode = MODE_JOINT
///      The controller will process joint targets of type 'JointMotionUpdate' and 
///      ignore other target types.

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__msg__TargetMode__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__msg__TargetMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TargetMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TargetMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TargetMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TargetMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TargetMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TargetMode where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/msg/TargetMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__TargetMode() }
  }
}


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__TrajectoryGenerationMode() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__msg__TrajectoryGenerationMode__init(msg: *mut TrajectoryGenerationMode) -> bool;
    fn aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryGenerationMode>, size: usize) -> bool;
    fn aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryGenerationMode>);
    fn aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryGenerationMode>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryGenerationMode>) -> bool;
}

// Corresponds to aic_control_interfaces__msg__TrajectoryGenerationMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// There are two ways that input targets can be provided for the MotionUpdate message.
///   1. mode = MODE_VELOCITY
///      In this case, a target velocity must be provided. The target pose
///      will be ignored.
///   2. mode = MODE_POSITION
///      In this case, a target pose must be provided. The target velocity
///      will be ignored.
/// Notes that messages with mode set to MODE_UNSPECIFIED will be ignored.

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__msg__TrajectoryGenerationMode__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__msg__TrajectoryGenerationMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryGenerationMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__msg__TrajectoryGenerationMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryGenerationMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryGenerationMode where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/msg/TrajectoryGenerationMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__msg__TrajectoryGenerationMode() }
  }
}


