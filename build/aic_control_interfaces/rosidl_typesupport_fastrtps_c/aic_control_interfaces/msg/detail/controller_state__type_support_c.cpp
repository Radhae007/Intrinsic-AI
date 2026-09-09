// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aic_control_interfaces:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "aic_control_interfaces/msg/detail/controller_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aic_control_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aic_control_interfaces/msg/detail/controller_state__struct.h"
#include "aic_control_interfaces/msg/detail/controller_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "aic_control_interfaces/msg/detail/target_mode__functions.h"  // target_mode
#include "geometry_msgs/msg/detail/pose__functions.h"  // reference_tcp_pose, tcp_pose
#include "geometry_msgs/msg/detail/twist__functions.h"  // tcp_velocity
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"  // fts_tare_offset
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // reference_joint_state

// forward declare type support functions

bool cdr_serialize_aic_control_interfaces__msg__TargetMode(
  const aic_control_interfaces__msg__TargetMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_aic_control_interfaces__msg__TargetMode(
  eprosima::fastcdr::Cdr & cdr,
  aic_control_interfaces__msg__TargetMode * ros_message);

size_t get_serialized_size_aic_control_interfaces__msg__TargetMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_aic_control_interfaces__msg__TargetMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_aic_control_interfaces__msg__TargetMode(
  const aic_control_interfaces__msg__TargetMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_aic_control_interfaces__msg__TargetMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_aic_control_interfaces__msg__TargetMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_control_interfaces, msg, TargetMode)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_geometry_msgs__msg__WrenchStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__WrenchStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, WrenchStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
  const trajectory_msgs__msg__JointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(
  eprosima::fastcdr::Cdr & cdr,
  trajectory_msgs__msg__JointTrajectoryPoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
  const trajectory_msgs__msg__JointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();


using _ControllerState__ros_msg_type = aic_control_interfaces__msg__ControllerState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_aic_control_interfaces__msg__ControllerState(
  const aic_control_interfaces__msg__ControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tcp_pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->tcp_pose, cdr);
  }

  // Field name: tcp_velocity
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->tcp_velocity, cdr);
  }

  // Field name: reference_tcp_pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->reference_tcp_pose, cdr);
  }

  // Field name: tcp_error
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_error;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reference_joint_state
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->reference_joint_state, cdr);
  }

  // Field name: target_mode
  {
    cdr_serialize_aic_control_interfaces__msg__TargetMode(
      &ros_message->target_mode, cdr);
  }

  // Field name: fts_tare_offset
  {
    cdr_serialize_geometry_msgs__msg__WrenchStamped(
      &ros_message->fts_tare_offset, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_deserialize_aic_control_interfaces__msg__ControllerState(
  eprosima::fastcdr::Cdr & cdr,
  aic_control_interfaces__msg__ControllerState * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: tcp_pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->tcp_pose);
  }

  // Field name: tcp_velocity
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->tcp_velocity);
  }

  // Field name: reference_tcp_pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->reference_tcp_pose);
  }

  // Field name: tcp_error
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_error;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: reference_joint_state
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->reference_joint_state);
  }

  // Field name: target_mode
  {
    cdr_deserialize_aic_control_interfaces__msg__TargetMode(cdr, &ros_message->target_mode);
  }

  // Field name: fts_tare_offset
  {
    cdr_deserialize_geometry_msgs__msg__WrenchStamped(cdr, &ros_message->fts_tare_offset);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_aic_control_interfaces__msg__ControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerState__ros_msg_type * ros_message = static_cast<const _ControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tcp_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->tcp_pose), current_alignment);

  // Field name: tcp_velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->tcp_velocity), current_alignment);

  // Field name: reference_tcp_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->reference_tcp_pose), current_alignment);

  // Field name: tcp_error
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->tcp_error;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_joint_state
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->reference_joint_state), current_alignment);

  // Field name: target_mode
  current_alignment += get_serialized_size_aic_control_interfaces__msg__TargetMode(
    &(ros_message->target_mode), current_alignment);

  // Field name: fts_tare_offset
  current_alignment += get_serialized_size_geometry_msgs__msg__WrenchStamped(
    &(ros_message->fts_tare_offset), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_aic_control_interfaces__msg__ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reference_tcp_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_error
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aic_control_interfaces__msg__TargetMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: fts_tare_offset
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__WrenchStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aic_control_interfaces__msg__ControllerState;
    is_plain =
      (
      offsetof(DataType, fts_tare_offset) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_key_aic_control_interfaces__msg__ControllerState(
  const aic_control_interfaces__msg__ControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tcp_pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->tcp_pose, cdr);
  }

  // Field name: tcp_velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->tcp_velocity, cdr);
  }

  // Field name: reference_tcp_pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->reference_tcp_pose, cdr);
  }

  // Field name: tcp_error
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_error;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reference_joint_state
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->reference_joint_state, cdr);
  }

  // Field name: target_mode
  {
    cdr_serialize_key_aic_control_interfaces__msg__TargetMode(
      &ros_message->target_mode, cdr);
  }

  // Field name: fts_tare_offset
  {
    cdr_serialize_key_geometry_msgs__msg__WrenchStamped(
      &ros_message->fts_tare_offset, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_key_aic_control_interfaces__msg__ControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerState__ros_msg_type * ros_message = static_cast<const _ControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tcp_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->tcp_pose), current_alignment);

  // Field name: tcp_velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->tcp_velocity), current_alignment);

  // Field name: reference_tcp_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->reference_tcp_pose), current_alignment);

  // Field name: tcp_error
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->tcp_error;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_joint_state
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->reference_joint_state), current_alignment);

  // Field name: target_mode
  current_alignment += get_serialized_size_key_aic_control_interfaces__msg__TargetMode(
    &(ros_message->target_mode), current_alignment);

  // Field name: fts_tare_offset
  current_alignment += get_serialized_size_key_geometry_msgs__msg__WrenchStamped(
    &(ros_message->fts_tare_offset), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_key_aic_control_interfaces__msg__ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reference_tcp_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tcp_error
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aic_control_interfaces__msg__TargetMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: fts_tare_offset
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__WrenchStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aic_control_interfaces__msg__ControllerState;
    is_plain =
      (
      offsetof(DataType, fts_tare_offset) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aic_control_interfaces__msg__ControllerState * ros_message = static_cast<const aic_control_interfaces__msg__ControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aic_control_interfaces__msg__ControllerState(ros_message, cdr);
}

static bool _ControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aic_control_interfaces__msg__ControllerState * ros_message = static_cast<aic_control_interfaces__msg__ControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aic_control_interfaces__msg__ControllerState(cdr, ros_message);
}

static uint32_t _ControllerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aic_control_interfaces__msg__ControllerState(
      untyped_ros_message, 0));
}

static size_t _ControllerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aic_control_interfaces__msg__ControllerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerState = {
  "aic_control_interfaces::msg",
  "ControllerState",
  _ControllerState__cdr_serialize,
  _ControllerState__cdr_deserialize,
  _ControllerState__get_serialized_size,
  _ControllerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerState,
  get_message_typesupport_handle_function,
  &aic_control_interfaces__msg__ControllerState__get_type_hash,
  &aic_control_interfaces__msg__ControllerState__get_type_description,
  &aic_control_interfaces__msg__ControllerState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_control_interfaces, msg, ControllerState)() {
  return &_ControllerState__type_support;
}

#if defined(__cplusplus)
}
#endif
