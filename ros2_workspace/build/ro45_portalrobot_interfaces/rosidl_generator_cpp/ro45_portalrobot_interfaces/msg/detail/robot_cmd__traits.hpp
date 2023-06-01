// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ro45_portalrobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel_x
  {
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << ", ";
  }

  // member: vel_y
  {
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << ", ";
  }

  // member: vel_z
  {
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << ", ";
  }

  // member: activate_gripper
  {
    out << "activate_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << "\n";
  }

  // member: vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << "\n";
  }

  // member: vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << "\n";
  }

  // member: activate_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ro45_portalrobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ro45_portalrobot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ro45_portalrobot_interfaces::msg::RobotCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  ro45_portalrobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ro45_portalrobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ro45_portalrobot_interfaces::msg::RobotCmd & msg)
{
  return ro45_portalrobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ro45_portalrobot_interfaces::msg::RobotCmd>()
{
  return "ro45_portalrobot_interfaces::msg::RobotCmd";
}

template<>
inline const char * name<ro45_portalrobot_interfaces::msg::RobotCmd>()
{
  return "ro45_portalrobot_interfaces/msg/RobotCmd";
}

template<>
struct has_fixed_size<ro45_portalrobot_interfaces::msg::RobotCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ro45_portalrobot_interfaces::msg::RobotCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ro45_portalrobot_interfaces::msg::RobotCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_
