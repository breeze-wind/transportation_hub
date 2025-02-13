// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/OverallInfo.idl
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
#include "interfaces/msg/detail/overall_info__struct.h"
#include "interfaces/msg/detail/overall_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "interfaces/msg/detail/road_info__functions.h"
// end nested array functions include
bool interfaces__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interfaces__msg__road_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__overall_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("interfaces.msg._overall_info.OverallInfo", full_classname_dest, 40) == 0);
  }
  interfaces__msg__OverallInfo * ros_message = _ros_message;
  {  // number_of_cities
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_cities");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_cities = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // number_of_roads
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_roads");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_roads = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_info'");
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
    if (!interfaces__msg__RoadInfo__Sequence__init(&(ros_message->road_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create interfaces__msg__RoadInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    interfaces__msg__RoadInfo * dest = ros_message->road_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!interfaces__msg__road_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // src_city
    PyObject * field = PyObject_GetAttrString(_pymsg, "src_city");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->src_city = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // des_city
    PyObject * field = PyObject_GetAttrString(_pymsg, "des_city");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->des_city = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__overall_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OverallInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._overall_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OverallInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__OverallInfo * ros_message = (interfaces__msg__OverallInfo *)raw_ros_message;
  {  // number_of_cities
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number_of_cities);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_cities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_roads
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number_of_roads);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_roads", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_info
    PyObject * field = NULL;
    size_t size = ros_message->road_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    interfaces__msg__RoadInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_info.data[i]);
      PyObject * pyitem = interfaces__msg__road_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // src_city
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->src_city);
    {
      int rc = PyObject_SetAttrString(_pymessage, "src_city", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // des_city
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->des_city);
    {
      int rc = PyObject_SetAttrString(_pymessage, "des_city", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
