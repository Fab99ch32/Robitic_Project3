// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ro45_portalrobot_interfaces:msg/RobotCmd.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__struct.h"
#include "ro45_portalrobot_interfaces/msg/detail/robot_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ro45_portalrobot_interfaces__msg__robot_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ro45_portalrobot_interfaces.msg._robot_cmd.RobotCmd", full_classname_dest, 51) == 0);
  }
  ro45_portalrobot_interfaces__msg__RobotCmd * ros_message = _ros_message;
  {  // vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // activate_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "activate_gripper");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->activate_gripper = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ro45_portalrobot_interfaces__msg__robot_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ro45_portalrobot_interfaces.msg._robot_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ro45_portalrobot_interfaces__msg__RobotCmd * ros_message = (ro45_portalrobot_interfaces__msg__RobotCmd *)raw_ros_message;
  {  // vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activate_gripper
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->activate_gripper ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "activate_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
