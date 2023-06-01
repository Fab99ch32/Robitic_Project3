// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__TRAITS_HPP_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ro45_portalrobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotPos & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: pos_z
  {
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPos & msg, bool use_flow_style = false)
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
  const ro45_portalrobot_interfaces::msg::RobotPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  ro45_portalrobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ro45_portalrobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ro45_portalrobot_interfaces::msg::RobotPos & msg)
{
  return ro45_portalrobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ro45_portalrobot_interfaces::msg::RobotPos>()
{
  return "ro45_portalrobot_interfaces::msg::RobotPos";
}

template<>
inline const char * name<ro45_portalrobot_interfaces::msg::RobotPos>()
{
  return "ro45_portalrobot_interfaces/msg/RobotPos";
}

template<>
struct has_fixed_size<ro45_portalrobot_interfaces::msg::RobotPos>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ro45_portalrobot_interfaces::msg::RobotPos>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ro45_portalrobot_interfaces::msg::RobotPos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__TRAITS_HPP_
