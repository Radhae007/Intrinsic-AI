// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aic_control_interfaces:msg/MotionUpdate.idl
// generated code does not contain a copyright notice
#include "aic_control_interfaces/msg/detail/motion_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aic_control_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aic_control_interfaces/msg/detail/motion_update__struct.h"
#include "aic_control_interfaces/msg/detail/motion_update__functions.h"
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

#include "aic_control_interfaces/msg/detail/trajectory_generation_mode__functions.h"  // trajectory_generation_mode
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "geometry_msgs/msg/detail/twist__functions.h"  // velocity
#include "geometry_msgs/msg/detail/wrench__functions.h"  // feedforward_wrench_at_tip
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_aic_control_interfaces__msg__TrajectoryGenerationMode(
  const aic_control_interfaces__msg__TrajectoryGenerationMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_aic_control_interfaces__msg__TrajectoryGenerationMode(
  eprosima::fastcdr::Cdr & cdr,
  aic_control_interfaces__msg__TrajectoryGenerationMode * ros_message);

size_t get_serialized_size_aic_control_interfaces__msg__TrajectoryGenerationMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_aic_control_interfaces__msg__TrajectoryGenerationMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
  const aic_control_interfaces__msg__TrajectoryGenerationMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_control_interfaces, msg, TrajectoryGenerationMode)();

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
bool cdr_serialize_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_deserialize_geometry_msgs__msg__Wrench(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Wrench * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aic_control_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench)();

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


using _MotionUpdate__ros_msg_type = aic_control_interfaces__msg__MotionUpdate;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_aic_control_interfaces__msg__MotionUpdate(
  const aic_control_interfaces__msg__MotionUpdate * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: target_stiffness
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_stiffness;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_damping;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: feedforward_wrench_at_tip
  {
    cdr_serialize_geometry_msgs__msg__Wrench(
      &ros_message->feedforward_wrench_at_tip, cdr);
  }

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t size = 6;
    auto array_ptr = ros_message->wrench_feedback_gains_at_tip;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_serialize_aic_control_interfaces__msg__TrajectoryGenerationMode(
      &ros_message->trajectory_generation_mode, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_deserialize_aic_control_interfaces__msg__MotionUpdate(
  eprosima::fastcdr::Cdr & cdr,
  aic_control_interfaces__msg__MotionUpdate * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->velocity);
  }

  // Field name: target_stiffness
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_stiffness;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_damping;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: feedforward_wrench_at_tip
  {
    cdr_deserialize_geometry_msgs__msg__Wrench(cdr, &ros_message->feedforward_wrench_at_tip);
  }

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t size = 6;
    auto array_ptr = ros_message->wrench_feedback_gains_at_tip;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_deserialize_aic_control_interfaces__msg__TrajectoryGenerationMode(cdr, &ros_message->trajectory_generation_mode);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_aic_control_interfaces__msg__MotionUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionUpdate__ros_msg_type * ros_message = static_cast<const _MotionUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: target_stiffness
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->target_stiffness;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_damping
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->target_damping;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feedforward_wrench_at_tip
  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->feedforward_wrench_at_tip), current_alignment);

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->wrench_feedback_gains_at_tip;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_generation_mode
  current_alignment += get_serialized_size_aic_control_interfaces__msg__TrajectoryGenerationMode(
    &(ros_message->trajectory_generation_mode), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_aic_control_interfaces__msg__MotionUpdate(
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

  // Field name: pose
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

  // Field name: velocity
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

  // Field name: target_stiffness
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_damping
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: feedforward_wrench_at_tip
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: trajectory_generation_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aic_control_interfaces__msg__TrajectoryGenerationMode(
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
    using DataType = aic_control_interfaces__msg__MotionUpdate;
    is_plain =
      (
      offsetof(DataType, trajectory_generation_mode) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_key_aic_control_interfaces__msg__MotionUpdate(
  const aic_control_interfaces__msg__MotionUpdate * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: target_stiffness
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_stiffness;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    size_t size = 36;
    auto array_ptr = ros_message->target_damping;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: feedforward_wrench_at_tip
  {
    cdr_serialize_key_geometry_msgs__msg__Wrench(
      &ros_message->feedforward_wrench_at_tip, cdr);
  }

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t size = 6;
    auto array_ptr = ros_message->wrench_feedback_gains_at_tip;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_serialize_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
      &ros_message->trajectory_generation_mode, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_key_aic_control_interfaces__msg__MotionUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionUpdate__ros_msg_type * ros_message = static_cast<const _MotionUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: target_stiffness
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->target_stiffness;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_damping
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->target_damping;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feedforward_wrench_at_tip
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Wrench(
    &(ros_message->feedforward_wrench_at_tip), current_alignment);

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->wrench_feedback_gains_at_tip;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_generation_mode
  current_alignment += get_serialized_size_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
    &(ros_message->trajectory_generation_mode), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_key_aic_control_interfaces__msg__MotionUpdate(
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

  // Field name: pose
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

  // Field name: velocity
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

  // Field name: target_stiffness
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_damping
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: feedforward_wrench_at_tip
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench_feedback_gains_at_tip
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: trajectory_generation_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
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
    using DataType = aic_control_interfaces__msg__MotionUpdate;
    is_plain =
      (
      offsetof(DataType, trajectory_generation_mode) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MotionUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aic_control_interfaces__msg__MotionUpdate * ros_message = static_cast<const aic_control_interfaces__msg__MotionUpdate *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aic_control_interfaces__msg__MotionUpdate(ros_message, cdr);
}

static bool _MotionUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aic_control_interfaces__msg__MotionUpdate * ros_message = static_cast<aic_control_interfaces__msg__MotionUpdate *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aic_control_interfaces__msg__MotionUpdate(cdr, ros_message);
}

static uint32_t _MotionUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aic_control_interfaces__msg__MotionUpdate(
      untyped_ros_message, 0));
}

static size_t _MotionUpdate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aic_control_interfaces__msg__MotionUpdate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionUpdate = {
  "aic_control_interfaces::msg",
  "MotionUpdate",
  _MotionUpdate__cdr_serialize,
  _MotionUpdate__cdr_deserialize,
  _MotionUpdate__get_serialized_size,
  _MotionUpdate__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotionUpdate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionUpdate,
  get_message_typesupport_handle_function,
  &aic_control_interfaces__msg__MotionUpdate__get_type_hash,
  &aic_control_interfaces__msg__MotionUpdate__get_type_description,
  &aic_control_interfaces__msg__MotionUpdate__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_control_interfaces, msg, MotionUpdate)() {
  return &_MotionUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
