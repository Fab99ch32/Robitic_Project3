// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ro45_portalrobot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
cdr_serialize(
  const ro45_portalrobot_interfaces::msg::RobotCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vel_x
  cdr << ros_message.vel_x;
  // Member: vel_y
  cdr << ros_message.vel_y;
  // Member: vel_z
  cdr << ros_message.vel_z;
  // Member: activate_gripper
  cdr << (ros_message.activate_gripper ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ro45_portalrobot_interfaces::msg::RobotCmd & ros_message)
{
  // Member: vel_x
  cdr >> ros_message.vel_x;

  // Member: vel_y
  cdr >> ros_message.vel_y;

  // Member: vel_z
  cdr >> ros_message.vel_z;

  // Member: activate_gripper
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.activate_gripper = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
get_serialized_size(
  const ro45_portalrobot_interfaces::msg::RobotCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vel_x
  {
    size_t item_size = sizeof(ros_message.vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_y
  {
    size_t item_size = sizeof(ros_message.vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_z
  {
    size_t item_size = sizeof(ros_message.vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: activate_gripper
  {
    size_t item_size = sizeof(ros_message.activate_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
max_serialized_size_RobotCmd(
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


  // Member: vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: activate_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RobotCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ro45_portalrobot_interfaces::msg::RobotCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ro45_portalrobot_interfaces::msg::RobotCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ro45_portalrobot_interfaces::msg::RobotCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotCmd__callbacks = {
  "ro45_portalrobot_interfaces::msg",
  "RobotCmd",
  _RobotCmd__cdr_serialize,
  _RobotCmd__cdr_deserialize,
  _RobotCmd__get_serialized_size,
  _RobotCmd__max_serialized_size
};

static rosidl_message_type_support_t _RobotCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ro45_portalrobot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ro45_portalrobot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ro45_portalrobot_interfaces::msg::RobotCmd>()
{
  return &ro45_portalrobot_interfaces::msg::typesupport_fastrtps_cpp::_RobotCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ro45_portalrobot_interfaces, msg, RobotCmd)() {
  return &ro45_portalrobot_interfaces::msg::typesupport_fastrtps_cpp::_RobotCmd__handle;
}

#ifdef __cplusplus
}
#endif
