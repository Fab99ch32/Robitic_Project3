// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ro45_portalrobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotPos_pos_z
{
public:
  explicit Init_RobotPos_pos_z(::ro45_portalrobot_interfaces::msg::RobotPos & msg)
  : msg_(msg)
  {}
  ::ro45_portalrobot_interfaces::msg::RobotPos pos_z(::ro45_portalrobot_interfaces::msg::RobotPos::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotPos msg_;
};

class Init_RobotPos_pos_y
{
public:
  explicit Init_RobotPos_pos_y(::ro45_portalrobot_interfaces::msg::RobotPos & msg)
  : msg_(msg)
  {}
  Init_RobotPos_pos_z pos_y(::ro45_portalrobot_interfaces::msg::RobotPos::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_RobotPos_pos_z(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotPos msg_;
};

class Init_RobotPos_pos_x
{
public:
  Init_RobotPos_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPos_pos_y pos_x(::ro45_portalrobot_interfaces::msg::RobotPos::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_RobotPos_pos_y(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ro45_portalrobot_interfaces::msg::RobotPos>()
{
  return ro45_portalrobot_interfaces::msg::builder::Init_RobotPos_pos_x();
}

}  // namespace ro45_portalrobot_interfaces

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
