// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ro45_portalrobot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotPos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ro45_portalrobot_interfaces::msg::RobotPos(_init);
}

void RobotPos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ro45_portalrobot_interfaces::msg::RobotPos *>(message_memory);
  typed_message->~RobotPos();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotPos_message_member_array[3] = {
  {
    "pos_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces::msg::RobotPos, pos_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces::msg::RobotPos, pos_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces::msg::RobotPos, pos_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotPos_message_members = {
  "ro45_portalrobot_interfaces::msg",  // message namespace
  "RobotPos",  // message name
  3,  // number of fields
  sizeof(ro45_portalrobot_interfaces::msg::RobotPos),
  RobotPos_message_member_array,  // message members
  RobotPos_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotPos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotPos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotPos_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ro45_portalrobot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ro45_portalrobot_interfaces::msg::RobotPos>()
{
  return &::ro45_portalrobot_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ro45_portalrobot_interfaces, msg, RobotPos)() {
  return &::ro45_portalrobot_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
