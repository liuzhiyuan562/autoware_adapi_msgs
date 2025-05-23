// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/DiagGraphStruct.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/diag_graph_struct__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/diag_graph_struct__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "autoware_adapi_v1_msgs/msg/detail/diag_link_struct__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/diag_node_struct__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__diag_node_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__diag_node_struct__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__diag_link_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__diag_link_struct__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__diag_graph_struct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._diag_graph_struct.DiagGraphStruct", full_classname_dest, 61) == 0);
  }
  autoware_adapi_v1_msgs__msg__DiagGraphStruct * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nodes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__DiagNodeStruct__Sequence__init(&(ros_message->nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_adapi_v1_msgs__msg__DiagNodeStruct__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_adapi_v1_msgs__msg__DiagNodeStruct * dest = ros_message->nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__diag_node_struct__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // links
    PyObject * field = PyObject_GetAttrString(_pymsg, "links");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'links'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__DiagLinkStruct__Sequence__init(&(ros_message->links), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_adapi_v1_msgs__msg__DiagLinkStruct__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_adapi_v1_msgs__msg__DiagLinkStruct * dest = ros_message->links.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__diag_link_struct__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__diag_graph_struct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagGraphStruct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._diag_graph_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagGraphStruct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_adapi_v1_msgs__msg__DiagGraphStruct * ros_message = (autoware_adapi_v1_msgs__msg__DiagGraphStruct *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodes
    PyObject * field = NULL;
    size_t size = ros_message->nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_adapi_v1_msgs__msg__DiagNodeStruct * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nodes.data[i]);
      PyObject * pyitem = autoware_adapi_v1_msgs__msg__diag_node_struct__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // links
    PyObject * field = NULL;
    size_t size = ros_message->links.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_adapi_v1_msgs__msg__DiagLinkStruct * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->links.data[i]);
      PyObject * pyitem = autoware_adapi_v1_msgs__msg__diag_link_struct__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "links", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
