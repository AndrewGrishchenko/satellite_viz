// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from satellite_interfaces:srv/SatelliteSetPos.idl
// generated code does not contain a copyright notice
#include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `vector`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
satellite_interfaces__srv__SatelliteSetPos_Request__init(satellite_interfaces__srv__SatelliteSetPos_Request * msg)
{
  if (!msg) {
    return false;
  }
  // vector
  if (!geometry_msgs__msg__Vector3__init(&msg->vector)) {
    satellite_interfaces__srv__SatelliteSetPos_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    satellite_interfaces__srv__SatelliteSetPos_Request__fini(msg);
    return false;
  }
  return true;
}

void
satellite_interfaces__srv__SatelliteSetPos_Request__fini(satellite_interfaces__srv__SatelliteSetPos_Request * msg)
{
  if (!msg) {
    return;
  }
  // vector
  geometry_msgs__msg__Vector3__fini(&msg->vector);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
satellite_interfaces__srv__SatelliteSetPos_Request__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Request * lhs, const satellite_interfaces__srv__SatelliteSetPos_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vector
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vector), &(rhs->vector)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Request__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Request * input,
  satellite_interfaces__srv__SatelliteSetPos_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // vector
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vector), &(output->vector)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

satellite_interfaces__srv__SatelliteSetPos_Request *
satellite_interfaces__srv__SatelliteSetPos_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Request * msg = (satellite_interfaces__srv__SatelliteSetPos_Request *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(satellite_interfaces__srv__SatelliteSetPos_Request));
  bool success = satellite_interfaces__srv__SatelliteSetPos_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
satellite_interfaces__srv__SatelliteSetPos_Request__destroy(satellite_interfaces__srv__SatelliteSetPos_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    satellite_interfaces__srv__SatelliteSetPos_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__init(satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Request * data = NULL;

  if (size) {
    data = (satellite_interfaces__srv__SatelliteSetPos_Request *)allocator.zero_allocate(size, sizeof(satellite_interfaces__srv__SatelliteSetPos_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = satellite_interfaces__srv__SatelliteSetPos_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        satellite_interfaces__srv__SatelliteSetPos_Request__fini(&data[i - 1]);
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
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__fini(satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * array)
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
      satellite_interfaces__srv__SatelliteSetPos_Request__fini(&array->data[i]);
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

satellite_interfaces__srv__SatelliteSetPos_Request__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * array = (satellite_interfaces__srv__SatelliteSetPos_Request__Sequence *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__destroy(satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * lhs, const satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * input,
  satellite_interfaces__srv__SatelliteSetPos_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(satellite_interfaces__srv__SatelliteSetPos_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    satellite_interfaces__srv__SatelliteSetPos_Request * data =
      (satellite_interfaces__srv__SatelliteSetPos_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!satellite_interfaces__srv__SatelliteSetPos_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          satellite_interfaces__srv__SatelliteSetPos_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
satellite_interfaces__srv__SatelliteSetPos_Response__init(satellite_interfaces__srv__SatelliteSetPos_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
satellite_interfaces__srv__SatelliteSetPos_Response__fini(satellite_interfaces__srv__SatelliteSetPos_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
satellite_interfaces__srv__SatelliteSetPos_Response__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Response * lhs, const satellite_interfaces__srv__SatelliteSetPos_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Response__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Response * input,
  satellite_interfaces__srv__SatelliteSetPos_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

satellite_interfaces__srv__SatelliteSetPos_Response *
satellite_interfaces__srv__SatelliteSetPos_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Response * msg = (satellite_interfaces__srv__SatelliteSetPos_Response *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(satellite_interfaces__srv__SatelliteSetPos_Response));
  bool success = satellite_interfaces__srv__SatelliteSetPos_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
satellite_interfaces__srv__SatelliteSetPos_Response__destroy(satellite_interfaces__srv__SatelliteSetPos_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    satellite_interfaces__srv__SatelliteSetPos_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__init(satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Response * data = NULL;

  if (size) {
    data = (satellite_interfaces__srv__SatelliteSetPos_Response *)allocator.zero_allocate(size, sizeof(satellite_interfaces__srv__SatelliteSetPos_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = satellite_interfaces__srv__SatelliteSetPos_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        satellite_interfaces__srv__SatelliteSetPos_Response__fini(&data[i - 1]);
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
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__fini(satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * array)
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
      satellite_interfaces__srv__SatelliteSetPos_Response__fini(&array->data[i]);
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

satellite_interfaces__srv__SatelliteSetPos_Response__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * array = (satellite_interfaces__srv__SatelliteSetPos_Response__Sequence *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__destroy(satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * lhs, const satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * input,
  satellite_interfaces__srv__SatelliteSetPos_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(satellite_interfaces__srv__SatelliteSetPos_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    satellite_interfaces__srv__SatelliteSetPos_Response * data =
      (satellite_interfaces__srv__SatelliteSetPos_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!satellite_interfaces__srv__SatelliteSetPos_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          satellite_interfaces__srv__SatelliteSetPos_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"

bool
satellite_interfaces__srv__SatelliteSetPos_Event__init(satellite_interfaces__srv__SatelliteSetPos_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    satellite_interfaces__srv__SatelliteSetPos_Event__fini(msg);
    return false;
  }
  // request
  if (!satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__init(&msg->request, 0)) {
    satellite_interfaces__srv__SatelliteSetPos_Event__fini(msg);
    return false;
  }
  // response
  if (!satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__init(&msg->response, 0)) {
    satellite_interfaces__srv__SatelliteSetPos_Event__fini(msg);
    return false;
  }
  return true;
}

void
satellite_interfaces__srv__SatelliteSetPos_Event__fini(satellite_interfaces__srv__SatelliteSetPos_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__fini(&msg->request);
  // response
  satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__fini(&msg->response);
}

bool
satellite_interfaces__srv__SatelliteSetPos_Event__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Event * lhs, const satellite_interfaces__srv__SatelliteSetPos_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Event__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Event * input,
  satellite_interfaces__srv__SatelliteSetPos_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!satellite_interfaces__srv__SatelliteSetPos_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!satellite_interfaces__srv__SatelliteSetPos_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

satellite_interfaces__srv__SatelliteSetPos_Event *
satellite_interfaces__srv__SatelliteSetPos_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Event * msg = (satellite_interfaces__srv__SatelliteSetPos_Event *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(satellite_interfaces__srv__SatelliteSetPos_Event));
  bool success = satellite_interfaces__srv__SatelliteSetPos_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
satellite_interfaces__srv__SatelliteSetPos_Event__destroy(satellite_interfaces__srv__SatelliteSetPos_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    satellite_interfaces__srv__SatelliteSetPos_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__init(satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Event * data = NULL;

  if (size) {
    data = (satellite_interfaces__srv__SatelliteSetPos_Event *)allocator.zero_allocate(size, sizeof(satellite_interfaces__srv__SatelliteSetPos_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = satellite_interfaces__srv__SatelliteSetPos_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        satellite_interfaces__srv__SatelliteSetPos_Event__fini(&data[i - 1]);
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
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__fini(satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * array)
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
      satellite_interfaces__srv__SatelliteSetPos_Event__fini(&array->data[i]);
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

satellite_interfaces__srv__SatelliteSetPos_Event__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * array = (satellite_interfaces__srv__SatelliteSetPos_Event__Sequence *)allocator.allocate(sizeof(satellite_interfaces__srv__SatelliteSetPos_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__destroy(satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__are_equal(const satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * lhs, const satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
satellite_interfaces__srv__SatelliteSetPos_Event__Sequence__copy(
  const satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * input,
  satellite_interfaces__srv__SatelliteSetPos_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(satellite_interfaces__srv__SatelliteSetPos_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    satellite_interfaces__srv__SatelliteSetPos_Event * data =
      (satellite_interfaces__srv__SatelliteSetPos_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!satellite_interfaces__srv__SatelliteSetPos_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          satellite_interfaces__srv__SatelliteSetPos_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!satellite_interfaces__srv__SatelliteSetPos_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
