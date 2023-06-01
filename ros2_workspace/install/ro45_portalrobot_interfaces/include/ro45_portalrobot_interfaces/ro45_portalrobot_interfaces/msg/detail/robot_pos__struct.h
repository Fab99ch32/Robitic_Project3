// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__STRUCT_H_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotPos in the package ro45_portalrobot_interfaces.
typedef struct ro45_portalrobot_interfaces__msg__RobotPos
{
  float pos_x;
  float pos_y;
  float pos_z;
} ro45_portalrobot_interfaces__msg__RobotPos;

// Struct for a sequence of ro45_portalrobot_interfaces__msg__RobotPos.
typedef struct ro45_portalrobot_interfaces__msg__RobotPos__Sequence
{
  ro45_portalrobot_interfaces__msg__RobotPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ro45_portalrobot_interfaces__msg__RobotPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__STRUCT_H_
