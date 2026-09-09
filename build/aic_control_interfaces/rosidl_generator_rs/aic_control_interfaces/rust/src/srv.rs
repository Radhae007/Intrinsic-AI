#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to aic_control_interfaces__srv__ChangeTargetMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeTargetMode_Request {
    /// Mode for target execution
    pub target_mode: super::msg::TargetMode,

}



impl Default for ChangeTargetMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ChangeTargetMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ChangeTargetMode_Request {
  type RmwMsg = super::srv::rmw::ChangeTargetMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_mode: super::msg::TargetMode::into_rmw_message(std::borrow::Cow::Owned(msg.target_mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_mode: super::msg::TargetMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_mode: super::msg::TargetMode::from_rmw_message(msg.target_mode),
    }
  }
}


// Corresponds to aic_control_interfaces__srv__ChangeTargetMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeTargetMode_Response {
    /// indicate successful change of target mode
    pub success: bool,

}



impl Default for ChangeTargetMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ChangeTargetMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ChangeTargetMode_Response {
  type RmwMsg = super::srv::rmw::ChangeTargetMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


