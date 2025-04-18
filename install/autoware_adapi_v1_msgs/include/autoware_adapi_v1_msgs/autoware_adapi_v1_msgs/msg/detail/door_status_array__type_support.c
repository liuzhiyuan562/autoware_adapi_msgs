// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/DoorStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/door_status_array__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/door_status_array__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/door_status_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `doors`
#include "autoware_adapi_v1_msgs/msg/door_status.h"
// Member `doors`
#include "autoware_adapi_v1_msgs/msg/detail/door_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__DoorStatusArray__init(message_memory);
}

void autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__DoorStatusArray__fini(message_memory);
}

size_t autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__size_function__DoorStatusArray__doors(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__DoorStatus__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DoorStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_const_function__DoorStatusArray__doors(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__DoorStatus__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DoorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_function__DoorStatusArray__doors(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__DoorStatus__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DoorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__fetch_function__DoorStatusArray__doors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_adapi_v1_msgs__msg__DoorStatus * item =
    ((const autoware_adapi_v1_msgs__msg__DoorStatus *)
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_const_function__DoorStatusArray__doors(untyped_member, index));
  autoware_adapi_v1_msgs__msg__DoorStatus * value =
    (autoware_adapi_v1_msgs__msg__DoorStatus *)(untyped_value);
  *value = *item;
}

void autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__assign_function__DoorStatusArray__doors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_adapi_v1_msgs__msg__DoorStatus * item =
    ((autoware_adapi_v1_msgs__msg__DoorStatus *)
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_function__DoorStatusArray__doors(untyped_member, index));
  const autoware_adapi_v1_msgs__msg__DoorStatus * value =
    (const autoware_adapi_v1_msgs__msg__DoorStatus *)(untyped_value);
  *item = *value;
}

bool autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__resize_function__DoorStatusArray__doors(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__DoorStatus__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DoorStatus__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__DoorStatus__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__DoorStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DoorStatusArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DoorStatusArray, doors),  // bytes offset in struct
    NULL,  // default value
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__size_function__DoorStatusArray__doors,  // size() function pointer
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_const_function__DoorStatusArray__doors,  // get_const(index) function pointer
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__get_function__DoorStatusArray__doors,  // get(index) function pointer
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__fetch_function__DoorStatusArray__doors,  // fetch(index, &value) function pointer
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__assign_function__DoorStatusArray__doors,  // assign(index, value) function pointer
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__resize_function__DoorStatusArray__doors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "DoorStatusArray",  // message name
  2,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__DoorStatusArray),
  autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_member_array,  // message members
  autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DoorStatusArray)() {
  autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DoorStatus)();
  if (!autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__msg__DoorStatusArray__rosidl_typesupport_introspection_c__DoorStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
