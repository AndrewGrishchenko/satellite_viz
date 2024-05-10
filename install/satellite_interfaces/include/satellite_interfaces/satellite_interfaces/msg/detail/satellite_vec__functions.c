// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice
#include "satellite_interfaces/msg/detail/satellite_vec__functions.h"

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
satellite_interfaces__msg__SatelliteVec__init(satellite_interfaces__msg__SatelliteVec * msg)
{
  if (!msg) {
    return false;
  }
  // vector
  if (!geometry_msgs__msg__Vector3__init(&msg->vector)) {
    satellite_interfaces__msg__SatelliteVec__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    satellite_interfaces__msg__SatelliteVec__fini(msg);
    return false;
  }
  return true;
}

void
satellite_interfaces__msg__SatelliteVec__fini(satellite_interfaces__msg__SatelliteVec * msg)
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
satellite_interfaces__msg__SatelliteVec__are_equal(const satellite_interfaces__msg__SatelliteVec * lhs, const satellite_interfaces__msg__SatelliteVec * rhs)
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
satellite_interfaces__msg__SatelliteVec__copy(
  const satellite_interfaces__msg__SatelliteVec * input,
  satellite_interfaces__msg__SatelliteVec * output)
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

satellite_interfaces__msg__SatelliteVec *
satellite_interfaces__msg__SatelliteVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__msg__SatelliteVec * msg = (satellite_interfaces__msg__SatelliteVec *)allocator.allocate(sizeof(satellite_interfaces__msg__SatelliteVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(satellite_interfaces__msg__SatelliteVec));
  bool success = satellite_interfaces__msg__SatelliteVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
satellite_interfaces__msg__SatelliteVec__destroy(satellite_interfaces__msg__SatelliteVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    satellite_interfaces__msg__SatelliteVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
satellite_interfaces__msg__SatelliteVec__Sequence__init(satellite_interfaces__msg__SatelliteVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__msg__SatelliteVec * data = NULL;

  if (size) {
    data = (satellite_interfaces__msg__SatelliteVec *)allocator.zero_allocate(size, sizeof(satellite_interfaces__msg__SatelliteVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = satellite_interfaces__msg__SatelliteVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        satellite_interfaces__msg__SatelliteVec__fini(&data[i - 1]);
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
satellite_interfaces__msg__SatelliteVec__Sequence__fini(satellite_interfaces__msg__SatelliteVec__Sequence * array)
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
      satellite_interfaces__msg__SatelliteVec__fini(&array->data[i]);
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

satellite_interfaces__msg__SatelliteVec__Sequence *
satellite_interfaces__msg__SatelliteVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  satellite_interfaces__msg__SatelliteVec__Sequence * array = (satellite_interfaces__msg__SatelliteVec__Sequence *)allocator.allocate(sizeof(satellite_interfaces__msg__SatelliteVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = satellite_interfaces__msg__SatelliteVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
satellite_interfaces__msg__SatelliteVec__Sequence__destroy(satellite_interfaces__msg__SatelliteVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    satellite_interfaces__msg__SatelliteVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
satellite_interfaces__msg__SatelliteVec__Sequence__are_equal(const satellite_interfaces__msg__SatelliteVec__Sequence * lhs, const satellite_interfaces__msg__SatelliteVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!satellite_interfaces__msg__SatelliteVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
satellite_interfaces__msg__SatelliteVec__Sequence__copy(
  const satellite_interfaces__msg__SatelliteVec__Sequence * input,
  satellite_interfaces__msg__SatelliteVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(satellite_interfaces__msg__SatelliteVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    satellite_interfaces__msg__SatelliteVec * data =
      (satellite_interfaces__msg__SatelliteVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!satellite_interfaces__msg__SatelliteVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          satellite_interfaces__msg__SatelliteVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!satellite_interfaces__msg__SatelliteVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
