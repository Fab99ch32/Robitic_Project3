// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ro45_portalrobot_interfaces__msg__RobotCmd__init(ro45_portalrobot_interfaces__msg__RobotCmd * msg)
{
  if (!msg) {
    return false;
  }
  // vel_x
  // vel_y
  // vel_z
  // activate_gripper
  return true;
}

void
ro45_portalrobot_interfaces__msg__RobotCmd__fini(ro45_portalrobot_interfaces__msg__RobotCmd * msg)
{
  if (!msg) {
    return;
  }
  // vel_x
  // vel_y
  // vel_z
  // activate_gripper
}

bool
ro45_portalrobot_interfaces__msg__RobotCmd__are_equal(const ro45_portalrobot_interfaces__msg__RobotCmd * lhs, const ro45_portalrobot_interfaces__msg__RobotCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vel_x
  if (lhs->vel_x != rhs->vel_x) {
    return false;
  }
  // vel_y
  if (lhs->vel_y != rhs->vel_y) {
    return false;
  }
  // vel_z
  if (lhs->vel_z != rhs->vel_z) {
    return false;
  }
  // activate_gripper
  if (lhs->activate_gripper != rhs->activate_gripper) {
    return false;
  }
  return true;
}

bool
ro45_portalrobot_interfaces__msg__RobotCmd__copy(
  const ro45_portalrobot_interfaces__msg__RobotCmd * input,
  ro45_portalrobot_interfaces__msg__RobotCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // vel_x
  output->vel_x = input->vel_x;
  // vel_y
  output->vel_y = input->vel_y;
  // vel_z
  output->vel_z = input->vel_z;
  // activate_gripper
  output->activate_gripper = input->activate_gripper;
  return true;
}

ro45_portalrobot_interfaces__msg__RobotCmd *
ro45_portalrobot_interfaces__msg__RobotCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ro45_portalrobot_interfaces__msg__RobotCmd * msg = (ro45_portalrobot_interfaces__msg__RobotCmd *)allocator.allocate(sizeof(ro45_portalrobot_interfaces__msg__RobotCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ro45_portalrobot_interfaces__msg__RobotCmd));
  bool success = ro45_portalrobot_interfaces__msg__RobotCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ro45_portalrobot_interfaces__msg__RobotCmd__destroy(ro45_portalrobot_interfaces__msg__RobotCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ro45_portalrobot_interfaces__msg__RobotCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__init(ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ro45_portalrobot_interfaces__msg__RobotCmd * data = NULL;

  if (size) {
    data = (ro45_portalrobot_interfaces__msg__RobotCmd *)allocator.zero_allocate(size, sizeof(ro45_portalrobot_interfaces__msg__RobotCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ro45_portalrobot_interfaces__msg__RobotCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ro45_portalrobot_interfaces__msg__RobotCmd__fini(&data[i - 1]);
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
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__fini(ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * array)
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
      ro45_portalrobot_interfaces__msg__RobotCmd__fini(&array->data[i]);
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

ro45_portalrobot_interfaces__msg__RobotCmd__Sequence *
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * array = (ro45_portalrobot_interfaces__msg__RobotCmd__Sequence *)allocator.allocate(sizeof(ro45_portalrobot_interfaces__msg__RobotCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__destroy(ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__are_equal(const ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * lhs, const ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ro45_portalrobot_interfaces__msg__RobotCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ro45_portalrobot_interfaces__msg__RobotCmd__Sequence__copy(
  const ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * input,
  ro45_portalrobot_interfaces__msg__RobotCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ro45_portalrobot_interfaces__msg__RobotCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ro45_portalrobot_interfaces__msg__RobotCmd * data =
      (ro45_portalrobot_interfaces__msg__RobotCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ro45_portalrobot_interfaces__msg__RobotCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ro45_portalrobot_interfaces__msg__RobotCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ro45_portalrobot_interfaces__msg__RobotCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
