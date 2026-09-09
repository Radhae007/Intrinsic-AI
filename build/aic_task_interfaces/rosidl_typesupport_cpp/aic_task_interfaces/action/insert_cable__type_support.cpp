// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from aic_task_interfaces:action/InsertCable.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aic_task_interfaces/action/detail/insert_cable__functions.h"
#include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_Goal_type_support_ids_t;

static const _InsertCable_Goal_type_support_ids_t _InsertCable_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_Goal_type_support_symbol_names_t _InsertCable_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_Goal)),
  }
};

typedef struct _InsertCable_Goal_type_support_data_t
{
  void * data[2];
} _InsertCable_Goal_type_support_data_t;

static _InsertCable_Goal_type_support_data_t _InsertCable_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_Goal_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_Goal__get_type_hash,
  &aic_task_interfaces__action__InsertCable_Goal__get_type_description,
  &aic_task_interfaces__action__InsertCable_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Goal>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_Goal)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_Result_type_support_ids_t;

static const _InsertCable_Result_type_support_ids_t _InsertCable_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_Result_type_support_symbol_names_t _InsertCable_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_Result)),
  }
};

typedef struct _InsertCable_Result_type_support_data_t
{
  void * data[2];
} _InsertCable_Result_type_support_data_t;

static _InsertCable_Result_type_support_data_t _InsertCable_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_Result_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_Result_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_Result_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_Result__get_type_hash,
  &aic_task_interfaces__action__InsertCable_Result__get_type_description,
  &aic_task_interfaces__action__InsertCable_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Result>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_Result)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_Feedback_type_support_ids_t;

static const _InsertCable_Feedback_type_support_ids_t _InsertCable_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_Feedback_type_support_symbol_names_t _InsertCable_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_Feedback)),
  }
};

typedef struct _InsertCable_Feedback_type_support_data_t
{
  void * data[2];
} _InsertCable_Feedback_type_support_data_t;

static _InsertCable_Feedback_type_support_data_t _InsertCable_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_Feedback_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_Feedback__get_type_hash,
  &aic_task_interfaces__action__InsertCable_Feedback__get_type_description,
  &aic_task_interfaces__action__InsertCable_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Feedback>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_Feedback)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_SendGoal_Request_type_support_ids_t;

static const _InsertCable_SendGoal_Request_type_support_ids_t _InsertCable_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_SendGoal_Request_type_support_symbol_names_t _InsertCable_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Request)),
  }
};

typedef struct _InsertCable_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _InsertCable_SendGoal_Request_type_support_data_t;

static _InsertCable_SendGoal_Request_type_support_data_t _InsertCable_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_SendGoal_Request_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_SendGoal_Request__get_type_hash,
  &aic_task_interfaces__action__InsertCable_SendGoal_Request__get_type_description,
  &aic_task_interfaces__action__InsertCable_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Request>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Request)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_SendGoal_Response_type_support_ids_t;

static const _InsertCable_SendGoal_Response_type_support_ids_t _InsertCable_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_SendGoal_Response_type_support_symbol_names_t _InsertCable_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Response)),
  }
};

typedef struct _InsertCable_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _InsertCable_SendGoal_Response_type_support_data_t;

static _InsertCable_SendGoal_Response_type_support_data_t _InsertCable_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_SendGoal_Response_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_SendGoal_Response__get_type_hash,
  &aic_task_interfaces__action__InsertCable_SendGoal_Response__get_type_description,
  &aic_task_interfaces__action__InsertCable_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Response>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Response)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_SendGoal_Event_type_support_ids_t;

static const _InsertCable_SendGoal_Event_type_support_ids_t _InsertCable_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_SendGoal_Event_type_support_symbol_names_t _InsertCable_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Event)),
  }
};

typedef struct _InsertCable_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _InsertCable_SendGoal_Event_type_support_data_t;

static _InsertCable_SendGoal_Event_type_support_data_t _InsertCable_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_SendGoal_Event_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_SendGoal_Event__get_type_hash,
  &aic_task_interfaces__action__InsertCable_SendGoal_Event__get_type_description,
  &aic_task_interfaces__action__InsertCable_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Event>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_SendGoal_Event)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_SendGoal_type_support_ids_t;

static const _InsertCable_SendGoal_type_support_ids_t _InsertCable_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_SendGoal_type_support_symbol_names_t _InsertCable_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_SendGoal)),
  }
};

typedef struct _InsertCable_SendGoal_type_support_data_t
{
  void * data[2];
} _InsertCable_SendGoal_type_support_data_t;

static _InsertCable_SendGoal_type_support_data_t _InsertCable_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_SendGoal_service_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InsertCable_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<aic_task_interfaces::action::InsertCable_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<aic_task_interfaces::action::InsertCable_SendGoal>,
  &aic_task_interfaces__action__InsertCable_SendGoal__get_type_hash,
  &aic_task_interfaces__action__InsertCable_SendGoal__get_type_description,
  &aic_task_interfaces__action__InsertCable_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<aic_task_interfaces::action::InsertCable_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_GetResult_Request_type_support_ids_t;

static const _InsertCable_GetResult_Request_type_support_ids_t _InsertCable_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_GetResult_Request_type_support_symbol_names_t _InsertCable_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_GetResult_Request)),
  }
};

typedef struct _InsertCable_GetResult_Request_type_support_data_t
{
  void * data[2];
} _InsertCable_GetResult_Request_type_support_data_t;

static _InsertCable_GetResult_Request_type_support_data_t _InsertCable_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_GetResult_Request_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_GetResult_Request__get_type_hash,
  &aic_task_interfaces__action__InsertCable_GetResult_Request__get_type_description,
  &aic_task_interfaces__action__InsertCable_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Request>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_GetResult_Request)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_GetResult_Response_type_support_ids_t;

static const _InsertCable_GetResult_Response_type_support_ids_t _InsertCable_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_GetResult_Response_type_support_symbol_names_t _InsertCable_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_GetResult_Response)),
  }
};

typedef struct _InsertCable_GetResult_Response_type_support_data_t
{
  void * data[2];
} _InsertCable_GetResult_Response_type_support_data_t;

static _InsertCable_GetResult_Response_type_support_data_t _InsertCable_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_GetResult_Response_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_GetResult_Response__get_type_hash,
  &aic_task_interfaces__action__InsertCable_GetResult_Response__get_type_description,
  &aic_task_interfaces__action__InsertCable_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Response>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_GetResult_Response)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_GetResult_Event_type_support_ids_t;

static const _InsertCable_GetResult_Event_type_support_ids_t _InsertCable_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_GetResult_Event_type_support_symbol_names_t _InsertCable_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_GetResult_Event)),
  }
};

typedef struct _InsertCable_GetResult_Event_type_support_data_t
{
  void * data[2];
} _InsertCable_GetResult_Event_type_support_data_t;

static _InsertCable_GetResult_Event_type_support_data_t _InsertCable_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_GetResult_Event_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_GetResult_Event__get_type_hash,
  &aic_task_interfaces__action__InsertCable_GetResult_Event__get_type_description,
  &aic_task_interfaces__action__InsertCable_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Event>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_GetResult_Event)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_GetResult_type_support_ids_t;

static const _InsertCable_GetResult_type_support_ids_t _InsertCable_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_GetResult_type_support_symbol_names_t _InsertCable_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_GetResult)),
  }
};

typedef struct _InsertCable_GetResult_type_support_data_t
{
  void * data[2];
} _InsertCable_GetResult_type_support_data_t;

static _InsertCable_GetResult_type_support_data_t _InsertCable_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_GetResult_service_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InsertCable_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<aic_task_interfaces::action::InsertCable_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<aic_task_interfaces::action::InsertCable_GetResult>,
  &aic_task_interfaces__action__InsertCable_GetResult__get_type_hash,
  &aic_task_interfaces__action__InsertCable_GetResult__get_type_description,
  &aic_task_interfaces__action__InsertCable_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<aic_task_interfaces::action::InsertCable_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__functions.h"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _InsertCable_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InsertCable_FeedbackMessage_type_support_ids_t;

static const _InsertCable_FeedbackMessage_type_support_ids_t _InsertCable_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InsertCable_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InsertCable_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InsertCable_FeedbackMessage_type_support_symbol_names_t _InsertCable_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aic_task_interfaces, action, InsertCable_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aic_task_interfaces, action, InsertCable_FeedbackMessage)),
  }
};

typedef struct _InsertCable_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _InsertCable_FeedbackMessage_type_support_data_t;

static _InsertCable_FeedbackMessage_type_support_data_t _InsertCable_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InsertCable_FeedbackMessage_message_typesupport_map = {
  2,
  "aic_task_interfaces",
  &_InsertCable_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_InsertCable_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_InsertCable_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InsertCable_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InsertCable_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aic_task_interfaces__action__InsertCable_FeedbackMessage__get_type_hash,
  &aic_task_interfaces__action__InsertCable_FeedbackMessage__get_type_description,
  &aic_task_interfaces__action__InsertCable_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aic_task_interfaces::action::InsertCable_FeedbackMessage>()
{
  return &::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable_FeedbackMessage)() {
  return get_message_type_support_handle<aic_task_interfaces::action::InsertCable_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "aic_task_interfaces/action/detail/insert_cable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace aic_task_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t InsertCable_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &aic_task_interfaces__action__InsertCable__get_type_hash,
  &aic_task_interfaces__action__InsertCable__get_type_description,
  &aic_task_interfaces__action__InsertCable__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace aic_task_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<aic_task_interfaces::action::InsertCable>()
{
  using ::aic_task_interfaces::action::rosidl_typesupport_cpp::InsertCable_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  InsertCable_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::aic_task_interfaces::action::InsertCable::Impl::SendGoalService>();
  InsertCable_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::aic_task_interfaces::action::InsertCable::Impl::GetResultService>();
  InsertCable_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::aic_task_interfaces::action::InsertCable::Impl::CancelGoalService>();
  InsertCable_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::aic_task_interfaces::action::InsertCable::Impl::FeedbackMessage>();
  InsertCable_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::aic_task_interfaces::action::InsertCable::Impl::GoalStatusMessage>();
  return &InsertCable_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, aic_task_interfaces, action, InsertCable)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<aic_task_interfaces::action::InsertCable>();
}

#ifdef __cplusplus
}
#endif
