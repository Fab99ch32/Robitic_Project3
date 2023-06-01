// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.hpp"

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
  const ro45_portalrobot_interfaces::msg::RobotPos & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_x
  cdr << ros_message.pos_x;
  // Member: pos_y
  cdr << ros_message.pos_y;
  // Member: pos_z
  cdr << ros_message.pos_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ro45_portalrobot_interfaces::msg::RobotPos & ros_message)
{
  // Member: pos_x
  cdr >> ros_message.pos_x;

  // Member: pos_y
  cdr >> ros_message.pos_y;

  // Member: pos_z
  cdr >> ros_message.pos_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
get_serialized_size(
  const ro45_portalrobot_interfaces::msg::RobotPos & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_x
  {
    size_t item_size = sizeof(ros_message.pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_y
  {
    size_t item_size = sizeof(ros_message.pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_z
  {
    size_t item_size = sizeof(ros_message.pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ro45_portalrobot_interfaces
max_serialized_size_RobotPos(
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


  // Member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobotPos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ro45_portalrobot_interfaces::msg::RobotPos *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotPos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ro45_portalrobot_interfaces::msg::RobotPos *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotPos__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ro45_portalrobot_interfaces::msg::RobotPos *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotPos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotPos(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotPos__callbacks = {
  "ro45_portalrobot_interfaces::msg",
  "RobotPos",
  _RobotPos__cdr_serialize,
  _RobotPos__cdr_deserialize,
  _RobotPos__get_serialized_size,
  _RobotPos__max_serialized_size
};

static rosidl_message_type_support_t _RobotPos__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotPos__callbacks,
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
get_message_type_support_handle<ro45_portalrobot_interfaces::msg::RobotPos>()
{
  return &ro45_portalrobot_interfaces::msg::typesupport_fastrtps_cpp::_RobotPos__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ro45_portalrobot_interfaces, msg, RobotPos)() {
  return &ro45_portalrobot_interfaces::msg::typesupport_fastrtps_cpp::_RobotPos__handle;
}

#ifdef __cplusplus
}
#endif
