// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DiagNodeStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DIAG_NODE_STATUS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DIAG_NODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DiagNodeStatus in the package autoware_adapi_v1_msgs.
/**
  * The level of diagnostic_msgs/msg/DiagnosticStatus.
 */
typedef struct autoware_adapi_v1_msgs__msg__DiagNodeStatus
{
  uint8_t level;
} autoware_adapi_v1_msgs__msg__DiagNodeStatus;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DiagNodeStatus.
typedef struct autoware_adapi_v1_msgs__msg__DiagNodeStatus__Sequence
{
  autoware_adapi_v1_msgs__msg__DiagNodeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DiagNodeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DIAG_NODE_STATUS__STRUCT_H_
