// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geographic_msgs__msg__geo_point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geographic_msgs__msg__geo_point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_with_covariance_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_with_covariance_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_with_covariance_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_with_covariance_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel_with_covariance_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel_with_covariance_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__vehicle_kinematics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._vehicle_kinematics.VehicleKinematics", full_classname_dest, 64) == 0);
  }
  autoware_adapi_v1_msgs__msg__VehicleKinematics * ros_message = _ros_message;
  {  // geographic_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "geographic_pose");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geo_point_stamped__convert_from_py(field, &ros_message->geographic_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_with_covariance_stamped__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // twist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_with_covariance_stamped__convert_from_py(field, &ros_message->twist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel_with_covariance_stamped__convert_from_py(field, &ros_message->accel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__vehicle_kinematics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleKinematics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._vehicle_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleKinematics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_adapi_v1_msgs__msg__VehicleKinematics * ros_message = (autoware_adapi_v1_msgs__msg__VehicleKinematics *)raw_ros_message;
  {  // geographic_pose
    PyObject * field = NULL;
    field = geographic_msgs__msg__geo_point_stamped__convert_to_py(&ros_message->geographic_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "geographic_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_with_covariance_stamped__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twist
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_with_covariance_stamped__convert_to_py(&ros_message->twist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel_with_covariance_stamped__convert_to_py(&ros_message->accel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
