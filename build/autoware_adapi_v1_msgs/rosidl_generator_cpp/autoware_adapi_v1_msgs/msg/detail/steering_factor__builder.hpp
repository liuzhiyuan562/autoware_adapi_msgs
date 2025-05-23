// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringFactor_cooperation
{
public:
  explicit Init_SteeringFactor_cooperation(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::SteeringFactor cooperation(::autoware_adapi_v1_msgs::msg::SteeringFactor::_cooperation_type arg)
  {
    msg_.cooperation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_detail
{
public:
  explicit Init_SteeringFactor_detail(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_cooperation detail(::autoware_adapi_v1_msgs::msg::SteeringFactor::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_SteeringFactor_cooperation(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_sequence
{
public:
  explicit Init_SteeringFactor_sequence(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_detail sequence(::autoware_adapi_v1_msgs::msg::SteeringFactor::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_SteeringFactor_detail(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_behavior
{
public:
  explicit Init_SteeringFactor_behavior(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_sequence behavior(::autoware_adapi_v1_msgs::msg::SteeringFactor::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_SteeringFactor_sequence(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_status
{
public:
  explicit Init_SteeringFactor_status(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_behavior status(::autoware_adapi_v1_msgs::msg::SteeringFactor::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SteeringFactor_behavior(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_direction
{
public:
  explicit Init_SteeringFactor_direction(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_status direction(::autoware_adapi_v1_msgs::msg::SteeringFactor::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_SteeringFactor_status(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_distance
{
public:
  explicit Init_SteeringFactor_distance(::autoware_adapi_v1_msgs::msg::SteeringFactor & msg)
  : msg_(msg)
  {}
  Init_SteeringFactor_direction distance(::autoware_adapi_v1_msgs::msg::SteeringFactor::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_SteeringFactor_direction(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

class Init_SteeringFactor_pose
{
public:
  Init_SteeringFactor_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringFactor_distance pose(::autoware_adapi_v1_msgs::msg::SteeringFactor::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SteeringFactor_distance(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::SteeringFactor>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_SteeringFactor_pose();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__BUILDER_HPP_
