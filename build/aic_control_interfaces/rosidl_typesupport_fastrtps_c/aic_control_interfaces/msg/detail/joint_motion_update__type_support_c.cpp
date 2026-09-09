// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aic_control_interfaces:msg/JointMotionUpdate.idl
// generated code does not contain a copyright notice
#include "aic_control_interfaces/msg/detail/joint_motion_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aic_control_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aic_control_interfaces/msg/detail/joint_motion_update__struct.h"
#include "aic_control_interfaces/msg/detail/joint_motion_update__functions.h"
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
#include "rosidl_runtime_c/primitives_sequence.h"  // target_damping, target_feedforward_torque, target_stiffness
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // target_damping, target_feedforward_torque, target_stiffness
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // target_state

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


using _JointMotionUpdate__ros_msg_type = aic_control_interfaces__msg__JointMotionUpdate;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_aic_control_interfaces__msg__JointMotionUpdate(
  const aic_control_interfaces__msg__JointMotionUpdate * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_state
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->target_state, cdr);
  }

  // Field name: target_stiffness
  {
    size_t size = ros_message->target_stiffness.size;
    auto array_ptr = ros_message->target_stiffness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    size_t size = ros_message->target_damping.size;
    auto array_ptr = ros_message->target_damping.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_serialize_aic_control_interfaces__msg__TrajectoryGenerationMode(
      &ros_message->trajectory_generation_mode, cdr);
  }

  // Field name: target_feedforward_torque
  {
    size_t size = ros_message->target_feedforward_torque.size;
    auto array_ptr = ros_message->target_feedforward_torque.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_deserialize_aic_control_interfaces__msg__JointMotionUpdate(
  eprosima::fastcdr::Cdr & cdr,
  aic_control_interfaces__msg__JointMotionUpdate * ros_message)
{
  // Field name: target_state
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->target_state);
  }

  // Field name: target_stiffness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->target_stiffness.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_stiffness);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_stiffness, size)) {
      fprintf(stderr, "failed to create array for field 'target_stiffness'");
      return false;
    }
    auto array_ptr = ros_message->target_stiffness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->target_damping.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_damping);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_damping, size)) {
      fprintf(stderr, "failed to create array for field 'target_damping'");
      return false;
    }
    auto array_ptr = ros_message->target_damping.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_deserialize_aic_control_interfaces__msg__TrajectoryGenerationMode(cdr, &ros_message->trajectory_generation_mode);
  }

  // Field name: target_feedforward_torque
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->target_feedforward_torque.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_feedforward_torque);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_feedforward_torque, size)) {
      fprintf(stderr, "failed to create array for field 'target_feedforward_torque'");
      return false;
    }
    auto array_ptr = ros_message->target_feedforward_torque.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_aic_control_interfaces__msg__JointMotionUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointMotionUpdate__ros_msg_type * ros_message = static_cast<const _JointMotionUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_state
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->target_state), current_alignment);

  // Field name: target_stiffness
  {
    size_t array_size = ros_message->target_stiffness.size;
    auto array_ptr = ros_message->target_stiffness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_damping
  {
    size_t array_size = ros_message->target_damping.size;
    auto array_ptr = ros_message->target_damping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_generation_mode
  current_alignment += get_serialized_size_aic_control_interfaces__msg__TrajectoryGenerationMode(
    &(ros_message->trajectory_generation_mode), current_alignment);

  // Field name: target_feedforward_torque
  {
    size_t array_size = ros_message->target_feedforward_torque.size;
    auto array_ptr = ros_message->target_feedforward_torque.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_aic_control_interfaces__msg__JointMotionUpdate(
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

  // Field name: target_state
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

  // Field name: target_stiffness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: target_feedforward_torque
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aic_control_interfaces__msg__JointMotionUpdate;
    is_plain =
      (
      offsetof(DataType, target_feedforward_torque) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
bool cdr_serialize_key_aic_control_interfaces__msg__JointMotionUpdate(
  const aic_control_interfaces__msg__JointMotionUpdate * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_state
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->target_state, cdr);
  }

  // Field name: target_stiffness
  {
    size_t size = ros_message->target_stiffness.size;
    auto array_ptr = ros_message->target_stiffness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: target_damping
  {
    size_t size = ros_message->target_damping.size;
    auto array_ptr = ros_message->target_damping.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: trajectory_generation_mode
  {
    cdr_serialize_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
      &ros_message->trajectory_generation_mode, cdr);
  }

  // Field name: target_feedforward_torque
  {
    size_t size = ros_message->target_feedforward_torque.size;
    auto array_ptr = ros_message->target_feedforward_torque.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t get_serialized_size_key_aic_control_interfaces__msg__JointMotionUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointMotionUpdate__ros_msg_type * ros_message = static_cast<const _JointMotionUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_state
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->target_state), current_alignment);

  // Field name: target_stiffness
  {
    size_t array_size = ros_message->target_stiffness.size;
    auto array_ptr = ros_message->target_stiffness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_damping
  {
    size_t array_size = ros_message->target_damping.size;
    auto array_ptr = ros_message->target_damping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_generation_mode
  current_alignment += get_serialized_size_key_aic_control_interfaces__msg__TrajectoryGenerationMode(
    &(ros_message->trajectory_generation_mode), current_alignment);

  // Field name: target_feedforward_torque
  {
    size_t array_size = ros_message->target_feedforward_torque.size;
    auto array_ptr = ros_message->target_feedforward_torque.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aic_control_interfaces
size_t max_serialized_size_key_aic_control_interfaces__msg__JointMotionUpdate(
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
  // Field name: target_state
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

  // Field name: target_stiffness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: target_feedforward_torque
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aic_control_interfaces__msg__JointMotionUpdate;
    is_plain =
      (
      offsetof(DataType, target_feedforward_torque) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _JointMotionUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aic_control_interfaces__msg__JointMotionUpdate * ros_message = static_cast<const aic_control_interfaces__msg__JointMotionUpdate *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aic_control_interfaces__msg__JointMotionUpdate(ros_message, cdr);
}

static bool _JointMotionUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aic_control_interfaces__msg__JointMotionUpdate * ros_message = static_cast<aic_control_interfaces__msg__JointMotionUpdate *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aic_control_interfaces__msg__JointMotionUpdate(cdr, ros_message);
}

static uint32_t _JointMotionUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aic_control_interfaces__msg__JointMotionUpdate(
      untyped_ros_message, 0));
}

static size_t _JointMotionUpdate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aic_control_interfaces__msg__JointMotionUpdate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointMotionUpdate = {
  "aic_control_interfaces::msg",
  "JointMotionUpdate",
  _JointMotionUpdate__cdr_serialize,
  _JointMotionUpdate__cdr_deserialize,
  _JointMotionUpdate__get_serialized_size,
  _JointMotionUpdate__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointMotionUpdate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointMotionUpdate,
  get_message_typesupport_handle_function,
  &aic_control_interfaces__msg__JointMotionUpdate__get_type_hash,
  &aic_control_interfaces__msg__JointMotionUpdate__get_type_description,
  &aic_control_interfaces__msg__JointMotionUpdate__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aic_control_interfaces, msg, JointMotionUpdate)() {
  return &_JointMotionUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
