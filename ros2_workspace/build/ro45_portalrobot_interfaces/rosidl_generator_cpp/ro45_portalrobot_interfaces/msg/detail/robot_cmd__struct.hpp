// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ro45_portalrobot_interfaces__msg__RobotCmd __attribute__((deprecated))
#else
# define DEPRECATED__ro45_portalrobot_interfaces__msg__RobotCmd __declspec(deprecated)
#endif

namespace ro45_portalrobot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCmd_
{
  using Type = RobotCmd_<ContainerAllocator>;

  explicit RobotCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->activate_gripper = false;
    }
  }

  explicit RobotCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->activate_gripper = false;
    }
  }

  // field types and members
  using _vel_x_type =
    float;
  _vel_x_type vel_x;
  using _vel_y_type =
    float;
  _vel_y_type vel_y;
  using _vel_z_type =
    float;
  _vel_z_type vel_z;
  using _activate_gripper_type =
    bool;
  _activate_gripper_type activate_gripper;

  // setters for named parameter idiom
  Type & set__vel_x(
    const float & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const float & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__vel_z(
    const float & _arg)
  {
    this->vel_z = _arg;
    return *this;
  }
  Type & set__activate_gripper(
    const bool & _arg)
  {
    this->activate_gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ro45_portalrobot_interfaces__msg__RobotCmd
    std::shared_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ro45_portalrobot_interfaces__msg__RobotCmd
    std::shared_ptr<ro45_portalrobot_interfaces::msg::RobotCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCmd_ & other) const
  {
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->vel_z != other.vel_z) {
      return false;
    }
    if (this->activate_gripper != other.activate_gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCmd_

// alias to use template instance with default allocator
using RobotCmd =
  ro45_portalrobot_interfaces::msg::RobotCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ro45_portalrobot_interfaces

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_
