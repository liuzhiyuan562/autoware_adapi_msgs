// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:srv/GetVehicleSpecs.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_specs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>()
{
  return ::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace autoware_adapi_v1_msgs


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVehicleSpecs_Response_specs
{
public:
  explicit Init_GetVehicleSpecs_Response_specs(::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response specs(::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response::_specs_type arg)
  {
    msg_.specs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response msg_;
};

class Init_GetVehicleSpecs_Response_status
{
public:
  Init_GetVehicleSpecs_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVehicleSpecs_Response_specs status(::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetVehicleSpecs_Response_specs(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>()
{
  return autoware_adapi_v1_msgs::srv::builder::Init_GetVehicleSpecs_Response_status();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__BUILDER_HPP_
