#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__srv__ChangeTargetMode_Request__init(msg: *mut ChangeTargetMode_Request) -> bool;
    fn aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Request>, size: usize) -> bool;
    fn aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Request>);
    fn aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChangeTargetMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Request>) -> bool;
}

// Corresponds to aic_control_interfaces__srv__ChangeTargetMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeTargetMode_Request {
    /// Mode for target execution
    pub target_mode: super::super::msg::rmw::TargetMode,

}



impl Default for ChangeTargetMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__srv__ChangeTargetMode_Request__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__srv__ChangeTargetMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChangeTargetMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChangeTargetMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChangeTargetMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/srv/ChangeTargetMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode_Request() }
  }
}


#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "aic_control_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_control_interfaces__srv__ChangeTargetMode_Response__init(msg: *mut ChangeTargetMode_Response) -> bool;
    fn aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Response>, size: usize) -> bool;
    fn aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Response>);
    fn aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChangeTargetMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ChangeTargetMode_Response>) -> bool;
}

// Corresponds to aic_control_interfaces__srv__ChangeTargetMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeTargetMode_Response {
    /// indicate successful change of target mode
    pub success: bool,

}



impl Default for ChangeTargetMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_control_interfaces__srv__ChangeTargetMode_Response__init(&mut msg as *mut _) {
        panic!("Call to aic_control_interfaces__srv__ChangeTargetMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChangeTargetMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_control_interfaces__srv__ChangeTargetMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChangeTargetMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChangeTargetMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aic_control_interfaces/srv/ChangeTargetMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode_Response() }
  }
}






#[link(name = "aic_control_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode() -> *const std::ffi::c_void;
}

// Corresponds to aic_control_interfaces__srv__ChangeTargetMode
#[allow(missing_docs, non_camel_case_types)]
pub struct ChangeTargetMode;

impl rosidl_runtime_rs::Service for ChangeTargetMode {
    type Request = ChangeTargetMode_Request;
    type Response = ChangeTargetMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aic_control_interfaces__srv__ChangeTargetMode() }
    }
}


