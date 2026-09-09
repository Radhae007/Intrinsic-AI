// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aic_engine_interfaces:srv/ResetJoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aic_engine_interfaces/srv/detail/reset_joints__struct.h"
#include "aic_engine_interfaces/srv/detail/reset_joints__type_support.h"
#include "aic_engine_interfaces/srv/detail/reset_joints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aic_engine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetJoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetJoints_Request_type_support_ids_t;

static const _ResetJoints_Request_type_support_ids_t _ResetJoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetJoints_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetJoints_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetJoints_Request_type_support_symbol_names_t _ResetJoints_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_engine_interfaces, srv, ResetJoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aic_engine_interfaces, srv, ResetJoints_Request)),
  }
};

typedef struct _ResetJoints_Request_type_support_data_t
{
  void * data[2];
} _ResetJoints_Request_type_support_data_t;

static _ResetJoints_Request_type_support_data_t _ResetJoints_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetJoints_Request_message_typesupport_map = {
  2,
  "aic_engine_interfaces",
  &_ResetJoints_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetJoints_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetJoints_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetJoints_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetJoints_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aic_engine_interfaces__srv__ResetJoints_Request__get_type_hash,
  &aic_engine_interfaces__srv__ResetJoints_Request__get_type_description,
  &aic_engine_interfaces__srv__ResetJoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aic_engine_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aic_engine_interfaces, srv, ResetJoints_Request)() {
  return &::aic_engine_interfaces::srv::rosidl_typesupport_c::ResetJoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__struct.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__type_support.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_engine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetJoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetJoints_Response_type_support_ids_t;

static const _ResetJoints_Response_type_support_ids_t _ResetJoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetJoints_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetJoints_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetJoints_Response_type_support_symbol_names_t _ResetJoints_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_engine_interfaces, srv, ResetJoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aic_engine_interfaces, srv, ResetJoints_Response)),
  }
};

typedef struct _ResetJoints_Response_type_support_data_t
{
  void * data[2];
} _ResetJoints_Response_type_support_data_t;

static _ResetJoints_Response_type_support_data_t _ResetJoints_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetJoints_Response_message_typesupport_map = {
  2,
  "aic_engine_interfaces",
  &_ResetJoints_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetJoints_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetJoints_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetJoints_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetJoints_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aic_engine_interfaces__srv__ResetJoints_Response__get_type_hash,
  &aic_engine_interfaces__srv__ResetJoints_Response__get_type_description,
  &aic_engine_interfaces__srv__ResetJoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aic_engine_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aic_engine_interfaces, srv, ResetJoints_Response)() {
  return &::aic_engine_interfaces::srv::rosidl_typesupport_c::ResetJoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__struct.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__type_support.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_engine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetJoints_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetJoints_Event_type_support_ids_t;

static const _ResetJoints_Event_type_support_ids_t _ResetJoints_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetJoints_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetJoints_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetJoints_Event_type_support_symbol_names_t _ResetJoints_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_engine_interfaces, srv, ResetJoints_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aic_engine_interfaces, srv, ResetJoints_Event)),
  }
};

typedef struct _ResetJoints_Event_type_support_data_t
{
  void * data[2];
} _ResetJoints_Event_type_support_data_t;

static _ResetJoints_Event_type_support_data_t _ResetJoints_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetJoints_Event_message_typesupport_map = {
  2,
  "aic_engine_interfaces",
  &_ResetJoints_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetJoints_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetJoints_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetJoints_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetJoints_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aic_engine_interfaces__srv__ResetJoints_Event__get_type_hash,
  &aic_engine_interfaces__srv__ResetJoints_Event__get_type_description,
  &aic_engine_interfaces__srv__ResetJoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aic_engine_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aic_engine_interfaces, srv, ResetJoints_Event)() {
  return &::aic_engine_interfaces::srv::rosidl_typesupport_c::ResetJoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aic_engine_interfaces/srv/detail/reset_joints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace aic_engine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ResetJoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetJoints_type_support_ids_t;

static const _ResetJoints_type_support_ids_t _ResetJoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetJoints_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetJoints_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetJoints_type_support_symbol_names_t _ResetJoints_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_engine_interfaces, srv, ResetJoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aic_engine_interfaces, srv, ResetJoints)),
  }
};

typedef struct _ResetJoints_type_support_data_t
{
  void * data[2];
} _ResetJoints_type_support_data_t;

static _ResetJoints_type_support_data_t _ResetJoints_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetJoints_service_typesupport_map = {
  2,
  "aic_engine_interfaces",
  &_ResetJoints_service_typesupport_ids.typesupport_identifier[0],
  &_ResetJoints_service_typesupport_symbol_names.symbol_name[0],
  &_ResetJoints_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetJoints_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetJoints_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ResetJoints_Request_message_type_support_handle,
  &ResetJoints_Response_message_type_support_handle,
  &ResetJoints_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aic_engine_interfaces,
    srv,
    ResetJoints
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aic_engine_interfaces,
    srv,
    ResetJoints
  ),
  &aic_engine_interfaces__srv__ResetJoints__get_type_hash,
  &aic_engine_interfaces__srv__ResetJoints__get_type_description,
  &aic_engine_interfaces__srv__ResetJoints__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aic_engine_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, aic_engine_interfaces, srv, ResetJoints)() {
  return &::aic_engine_interfaces::srv::rosidl_typesupport_c::ResetJoints_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
