#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to aic_task_interfaces__msg__Task
/// A unique ID for the cable insertion task.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: std::string::String,

    /// The type of cable which should be inserted.
    pub cable_type: std::string::String,

    /// The name of the cable which should be inserted, e.g., "sfp_sc".
    pub cable_name: std::string::String,

    /// The type of plug at the end of the cable which should be inserted, e.g., "sfp".
    pub plug_type: std::string::String,

    /// The name of plug at the end of the cable which should be inserted, e.g., "sfp_module".
    pub plug_name: std::string::String,

    /// The type of port on the module side into which the plug should be inserted, e.g., "sfp".
    pub port_type: std::string::String,

    /// The name of the port on the module side into which the plug should be inserted, e.g., "sfp_port_0".
    pub port_name: std::string::String,

    /// The name of the component or module on which the port exists, e.g., "nic_card_0"
    pub target_module_name: std::string::String,

    /// The number of seconds from the moment this request is received by when the task must complete.
    /// todo(yadunund): should this be a system clock timestamp instead.
    pub time_limit: u64,

}



impl Default for Task {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Task::default())
  }
}

impl rosidl_runtime_rs::Message for Task {
  type RmwMsg = super::msg::rmw::Task;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        cable_type: msg.cable_type.as_str().into(),
        cable_name: msg.cable_name.as_str().into(),
        plug_type: msg.plug_type.as_str().into(),
        plug_name: msg.plug_name.as_str().into(),
        port_type: msg.port_type.as_str().into(),
        port_name: msg.port_name.as_str().into(),
        target_module_name: msg.target_module_name.as_str().into(),
        time_limit: msg.time_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        cable_type: msg.cable_type.as_str().into(),
        cable_name: msg.cable_name.as_str().into(),
        plug_type: msg.plug_type.as_str().into(),
        plug_name: msg.plug_name.as_str().into(),
        port_type: msg.port_type.as_str().into(),
        port_name: msg.port_name.as_str().into(),
        target_module_name: msg.target_module_name.as_str().into(),
      time_limit: msg.time_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id.to_string(),
      cable_type: msg.cable_type.to_string(),
      cable_name: msg.cable_name.to_string(),
      plug_type: msg.plug_type.to_string(),
      plug_name: msg.plug_name.to_string(),
      port_type: msg.port_type.to_string(),
      port_name: msg.port_name.to_string(),
      target_module_name: msg.target_module_name.to_string(),
      time_limit: msg.time_limit,
    }
  }
}


