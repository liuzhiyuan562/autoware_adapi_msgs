// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/TurnIndicatorsCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS_COMMAND__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnIndicatorsCommand_command
{
public:
  explicit Init_TurnIndicatorsCommand_command(::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand command(::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand msg_;
};

class Init_TurnIndicatorsCommand_stamp
{
public:
  Init_TurnIndicatorsCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnIndicatorsCommand_command stamp(::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TurnIndicatorsCommand_command(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::TurnIndicatorsCommand>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_TurnIndicatorsCommand_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS_COMMAND__BUILDER_HPP_
