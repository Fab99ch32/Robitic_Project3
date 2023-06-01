// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ro45_portalrobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__struct.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__functions.h"
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


// forward declare type support functions


using _RobotCmd__ros_msg_type = ro45_portalrobot_interfaces__msg__RobotCmd;

static bool _RobotCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotCmd__ros_msg_type * ros_message = static_cast<const _RobotCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: vel_x
  {
    cdr << ros_message->vel_x;
  }

  // Field name: vel_y
  {
    cdr << ros_message->vel_y;
  }

  // Field name: vel_z
  {
    cdr << ros_message->vel_z;
  }

  // Field name: activate_gripper
  {
    cdr << (ros_message->activate_gripper ? true : false);
  }

  return true;
}

static bool _RobotCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotCmd__ros_msg_type * ros_message = static_cast<_RobotCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: vel_x
  {
    cdr >> ros_message->vel_x;
  }

  // Field name: vel_y
  {
    cdr >> ros_message->vel_y;
  }

  // Field name: vel_z
  {
    cdr >> ros_message->vel_z;
  }

  // Field name: activate_gripper
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->activate_gripper = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ro45_portalrobot_interfaces
size_t get_serialized_size_ro45_portalrobot_interfaces__msg__RobotCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotCmd__ros_msg_type * ros_message = static_cast<const _RobotCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vel_x
  {
    size_t item_size = sizeof(ros_message->vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_y
  {
    size_t item_size = sizeof(ros_message->vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_z
  {
    size_t item_size = sizeof(ros_message->vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name activate_gripper
  {
    size_t item_size = sizeof(ros_message->activate_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ro45_portalrobot_interfaces__msg__RobotCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ro45_portalrobot_interfaces
size_t max_serialized_size_ro45_portalrobot_interfaces__msg__RobotCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: activate_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ro45_portalrobot_interfaces__msg__RobotCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotCmd = {
  "ro45_portalrobot_interfaces::msg",
  "RobotCmd",
  _RobotCmd__cdr_serialize,
  _RobotCmd__cdr_deserialize,
  _RobotCmd__get_serialized_size,
  _RobotCmd__max_serialized_size
};

static rosidl_message_type_support_t _RobotCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ro45_portalrobot_interfaces, msg, RobotCmd)() {
  return &_RobotCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
