// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/MrmRequestList.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST_LIST__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/mrm_request_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_MrmRequestList_requests
{
public:
  explicit Init_MrmRequestList_requests(::autoware_adapi_v1_msgs::msg::MrmRequestList & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::MrmRequestList requests(::autoware_adapi_v1_msgs::msg::MrmRequestList::_requests_type arg)
  {
    msg_.requests = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmRequestList msg_;
};

class Init_MrmRequestList_stamp
{
public:
  Init_MrmRequestList_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrmRequestList_requests stamp(::autoware_adapi_v1_msgs::msg::MrmRequestList::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MrmRequestList_requests(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmRequestList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::MrmRequestList>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_MrmRequestList_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_REQUEST_LIST__BUILDER_HPP_
