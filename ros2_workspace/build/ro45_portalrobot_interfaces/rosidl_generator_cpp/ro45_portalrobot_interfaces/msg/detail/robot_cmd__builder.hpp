// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ro45_portalrobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotCmd_activate_gripper
{
public:
  explicit Init_RobotCmd_activate_gripper(::ro45_portalrobot_interfaces::msg::RobotCmd & msg)
  : msg_(msg)
  {}
  ::ro45_portalrobot_interfaces::msg::RobotCmd activate_gripper(::ro45_portalrobot_interfaces::msg::RobotCmd::_activate_gripper_type arg)
  {
    msg_.activate_gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotCmd msg_;
};

class Init_RobotCmd_vel_z
{
public:
  explicit Init_RobotCmd_vel_z(::ro45_portalrobot_interfaces::msg::RobotCmd & msg)
  : msg_(msg)
  {}
  Init_RobotCmd_activate_gripper vel_z(::ro45_portalrobot_interfaces::msg::RobotCmd::_vel_z_type arg)
  {
    msg_.vel_z = std::move(arg);
    return Init_RobotCmd_activate_gripper(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotCmd msg_;
};

class Init_RobotCmd_vel_y
{
public:
  explicit Init_RobotCmd_vel_y(::ro45_portalrobot_interfaces::msg::RobotCmd & msg)
  : msg_(msg)
  {}
  Init_RobotCmd_vel_z vel_y(::ro45_portalrobot_interfaces::msg::RobotCmd::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_RobotCmd_vel_z(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotCmd msg_;
};

class Init_RobotCmd_vel_x
{
public:
  Init_RobotCmd_vel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCmd_vel_y vel_x(::ro45_portalrobot_interfaces::msg::RobotCmd::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_RobotCmd_vel_y(msg_);
  }

private:
  ::ro45_portalrobot_interfaces::msg::RobotCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ro45_portalrobot_interfaces::msg::RobotCmd>()
{
  return ro45_portalrobot_interfaces::msg::builder::Init_RobotCmd_vel_x();
}

}  // namespace ro45_portalrobot_interfaces

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_
