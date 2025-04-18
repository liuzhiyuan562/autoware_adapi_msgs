// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/MrmRequest.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/mrm_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_MrmRequest_user
{
public:
  explicit Init_MrmRequest_user(::autoware_adapi_v1_msgs::msg::MrmRequest & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::MrmRequest user(::autoware_adapi_v1_msgs::msg::MrmRequest::_user_type arg)
  {
    msg_.user = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmRequest msg_;
};

class Init_MrmRequest_strategy
{
public:
  Init_MrmRequest_strategy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrmRequest_user strategy(::autoware_adapi_v1_msgs::msg::MrmRequest::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return Init_MrmRequest_user(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::MrmRequest>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_MrmRequest_strategy();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST__BUILDER_HPP_
