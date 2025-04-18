// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:srv/GetCooperationPolicies.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__init(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__fini(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__are_equal(const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * lhs, const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__copy(
  const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * input,
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request *
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * msg = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request));
  bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__destroy(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__init(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__fini(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence *
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * array = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__destroy(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * lhs, const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * input,
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request * data =
      (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"
// Member `policies`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__functions.h"

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__init(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__init(&msg->status)) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(msg);
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__init(&msg->policies, 0)) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&msg->status);
  // policies
  autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__fini(&msg->policies);
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__are_equal(const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * lhs, const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__are_equal(
      &(lhs->policies), &(rhs->policies)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__copy(
  const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * input,
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__copy(
      &(input->policies), &(output->policies)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response *
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * msg = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response));
  bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__destroy(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__init(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__fini(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence *
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * array = (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__destroy(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * lhs, const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * input,
  autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response * data =
      (autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
