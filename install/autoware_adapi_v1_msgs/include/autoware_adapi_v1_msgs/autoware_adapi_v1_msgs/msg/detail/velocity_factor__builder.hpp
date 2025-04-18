// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityFactor_cooperation
{
public:
  explicit Init_VelocityFactor_cooperation(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::VelocityFactor cooperation(::autoware_adapi_v1_msgs::msg::VelocityFactor::_cooperation_type arg)
  {
    msg_.cooperation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_detail
{
public:
  explicit Init_VelocityFactor_detail(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityFactor_cooperation detail(::autoware_adapi_v1_msgs::msg::VelocityFactor::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_VelocityFactor_cooperation(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_sequence
{
public:
  explicit Init_VelocityFactor_sequence(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityFactor_detail sequence(::autoware_adapi_v1_msgs::msg::VelocityFactor::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_VelocityFactor_detail(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_behavior
{
public:
  explicit Init_VelocityFactor_behavior(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityFactor_sequence behavior(::autoware_adapi_v1_msgs::msg::VelocityFactor::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_VelocityFactor_sequence(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_status
{
public:
  explicit Init_VelocityFactor_status(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityFactor_behavior status(::autoware_adapi_v1_msgs::msg::VelocityFactor::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_VelocityFactor_behavior(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_distance
{
public:
  explicit Init_VelocityFactor_distance(::autoware_adapi_v1_msgs::msg::VelocityFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityFactor_status distance(::autoware_adapi_v1_msgs::msg::VelocityFactor::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_VelocityFactor_status(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

class Init_VelocityFactor_pose
{
public:
  Init_VelocityFactor_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityFactor_distance pose(::autoware_adapi_v1_msgs::msg::VelocityFactor::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VelocityFactor_distance(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VelocityFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::VelocityFactor>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_VelocityFactor_pose();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__BUILDER_HPP_
