// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__rosidl_typesupport_introspection_c.h"
#include "ro45_portalrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__functions.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ro45_portalrobot_interfaces__msg__RobotPos__init(message_memory);
}

void ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_fini_function(void * message_memory)
{
  ro45_portalrobot_interfaces__msg__RobotPos__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_member_array[3] = {
  {
    "pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces__msg__RobotPos, pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces__msg__RobotPos, pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ro45_portalrobot_interfaces__msg__RobotPos, pos_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_members = {
  "ro45_portalrobot_interfaces__msg",  // message namespace
  "RobotPos",  // message name
  3,  // number of fields
  sizeof(ro45_portalrobot_interfaces__msg__RobotPos),
  ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_member_array,  // message members
  ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_init_function,  // function to initialize message memory (memory has to be allocated)
  ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_type_support_handle = {
  0,
  &ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ro45_portalrobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ro45_portalrobot_interfaces, msg, RobotPos)() {
  if (!ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_type_support_handle.typesupport_identifier) {
    ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ro45_portalrobot_interfaces__msg__RobotPos__rosidl_typesupport_introspection_c__RobotPos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
