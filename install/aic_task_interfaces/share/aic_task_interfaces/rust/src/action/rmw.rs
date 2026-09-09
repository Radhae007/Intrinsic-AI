
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Goal() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_Goal__init(msg: *mut InsertCable_Goal) -> bool;
    fn aic_task_interfaces__action__InsertCable_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Goal>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Goal>);
    fn aic_task_interfaces__action__InsertCable_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Goal>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task: super::super::msg::rmw::Task,

}



impl Default for InsertCable_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_Goal__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Goal() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Result() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_Result__init(msg: *mut InsertCable_Result) -> bool;
    fn aic_task_interfaces__action__InsertCable_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Result>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Result>);
    fn aic_task_interfaces__action__InsertCable_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Result>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_Result {
    /// Response
    /// True if the task succeeded.
    pub success: bool,

    /// A message if the task succeeded or failed.
    pub message: rosidl_runtime_rs::String,

}



impl Default for InsertCable_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_Result__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_Result where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Result() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_Feedback__init(msg: *mut InsertCable_Feedback) -> bool;
    fn aic_task_interfaces__action__InsertCable_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Feedback>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Feedback>);
    fn aic_task_interfaces__action__InsertCable_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_Feedback>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_Feedback {
    /// Feedback
    /// A description on how the task is progressing.
    pub message: rosidl_runtime_rs::String,

}



impl Default for InsertCable_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_Feedback__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_Feedback() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_FeedbackMessage__init(msg: *mut InsertCable_FeedbackMessage) -> bool;
    fn aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_FeedbackMessage>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_FeedbackMessage>);
    fn aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_FeedbackMessage>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::InsertCable_Feedback,

}



impl Default for InsertCable_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_FeedbackMessage() }
  }
}




#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_SendGoal_Request__init(msg: *mut InsertCable_SendGoal_Request) -> bool;
    fn aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Request>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Request>);
    fn aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Request>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::InsertCable_Goal,

}



impl Default for InsertCable_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal_Request() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_SendGoal_Response__init(msg: *mut InsertCable_SendGoal_Response) -> bool;
    fn aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Response>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Response>);
    fn aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_SendGoal_Response>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for InsertCable_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal_Response() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_GetResult_Request__init(msg: *mut InsertCable_GetResult_Request) -> bool;
    fn aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Request>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Request>);
    fn aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Request>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for InsertCable_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult_Request() }
  }
}


#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "aic_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn aic_task_interfaces__action__InsertCable_GetResult_Response__init(msg: *mut InsertCable_GetResult_Response) -> bool;
    fn aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Response>, size: usize) -> bool;
    fn aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Response>);
    fn aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsertCable_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<InsertCable_GetResult_Response>) -> bool;
}

// Corresponds to aic_task_interfaces__action__InsertCable_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsertCable_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::InsertCable_Result,

}



impl Default for InsertCable_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aic_task_interfaces__action__InsertCable_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to aic_task_interfaces__action__InsertCable_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsertCable_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aic_task_interfaces__action__InsertCable_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsertCable_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsertCable_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aic_task_interfaces/action/InsertCable_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult_Response() }
  }
}






#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to aic_task_interfaces__action__InsertCable_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct InsertCable_SendGoal;

impl rosidl_runtime_rs::Service for InsertCable_SendGoal {
    type Request = InsertCable_SendGoal_Request;
    type Response = InsertCable_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aic_task_interfaces__action__InsertCable_SendGoal() }
    }
}




#[link(name = "aic_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to aic_task_interfaces__action__InsertCable_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct InsertCable_GetResult;

impl rosidl_runtime_rs::Service for InsertCable_GetResult {
    type Request = InsertCable_GetResult_Request;
    type Response = InsertCable_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aic_task_interfaces__action__InsertCable_GetResult() }
    }
}


