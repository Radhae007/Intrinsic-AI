#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__msg__Task() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__msg__Task__init(msg: *mut Task) -> bool;
    fn aic_task_interfaces__msg__Task__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task>, size: usize) -> bool;
    fn aic_task_interfaces__msg__Task__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task>);
    fn aic_task_interfaces__msg__Task__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task>, out_seq: *mut rosidl_runtime_rs::Sequence<Task>) -> bool;
}

// Corresponds to aic_task_interfaces__msg__Task
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A unique ID for the cable insertion task.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: rosidl_runtime_rs::String,

    /// The type of cable which should be inserted.
    pub cable_type: rosidl_runtime_rs::String,

    /// The name of the cable which should be inserted, e.g., "sfp_sc".
    pub cable_name: rosidl_runtime_rs::String,

    /// The type of plug at the end of the cable which should be inserted, e.g., "sfp".
    pub plug_type: rosidl_runtime_rs::String,

    /// The name of plug at the end of the cable which should be inserted, e.g., "sfp_module".
    pub plug_name: rosidl_runtime_rs::String,

    /// The type of port on the module side into which the plug should be inserted, e.g., "sfp".
    pub port_type: rosidl_runtime_rs::String,

    /// The name of the port on the module side into which the plug should be inserted, e.g., "sfp_port_0".
    pub port_name: rosidl_runtime_rs::String,

    /// The name of the component or module on which the port exists, e.g., "nic_card_0"
    pub target_module_name: rosidl_runtime_rs::String,

    /// The number of seconds from the moment this request is received by when the task must complete.
    /// todo(yadunund): should this be a system clock timestamp instead.
    pub time_limit: u64,

}



impl Default for Task {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__msg__Task__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__msg__Task__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__msg__Task__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__msg__Task__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__msg__Task__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/msg/Task";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__msg__Task() }
  }
}


