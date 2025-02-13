# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/OverallInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OverallInfo(type):
    """Metaclass of message 'OverallInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.OverallInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__overall_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__overall_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__overall_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__overall_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__overall_info

            from interfaces.msg import RoadInfo
            if RoadInfo.__class__._TYPE_SUPPORT is None:
                RoadInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OverallInfo(metaclass=Metaclass_OverallInfo):
    """Message class 'OverallInfo'."""

    __slots__ = [
        '_number_of_cities',
        '_number_of_roads',
        '_road_info',
        '_src_city',
        '_des_city',
    ]

    _fields_and_field_types = {
        'number_of_cities': 'int32',
        'number_of_roads': 'int32',
        'road_info': 'sequence<interfaces/RoadInfo>',
        'src_city': 'int32',
        'des_city': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'RoadInfo')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number_of_cities = kwargs.get('number_of_cities', int())
        self.number_of_roads = kwargs.get('number_of_roads', int())
        self.road_info = kwargs.get('road_info', [])
        self.src_city = kwargs.get('src_city', int())
        self.des_city = kwargs.get('des_city', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.number_of_cities != other.number_of_cities:
            return False
        if self.number_of_roads != other.number_of_roads:
            return False
        if self.road_info != other.road_info:
            return False
        if self.src_city != other.src_city:
            return False
        if self.des_city != other.des_city:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def number_of_cities(self):
        """Message field 'number_of_cities'."""
        return self._number_of_cities

    @number_of_cities.setter
    def number_of_cities(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_cities' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_cities' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_cities = value

    @builtins.property
    def number_of_roads(self):
        """Message field 'number_of_roads'."""
        return self._number_of_roads

    @number_of_roads.setter
    def number_of_roads(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_roads' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_roads' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_roads = value

    @builtins.property
    def road_info(self):
        """Message field 'road_info'."""
        return self._road_info

    @road_info.setter
    def road_info(self, value):
        if __debug__:
            from interfaces.msg import RoadInfo
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, RoadInfo) for v in value) and
                 True), \
                "The 'road_info' field must be a set or sequence and each value of type 'RoadInfo'"
        self._road_info = value

    @builtins.property
    def src_city(self):
        """Message field 'src_city'."""
        return self._src_city

    @src_city.setter
    def src_city(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'src_city' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'src_city' field must be an integer in [-2147483648, 2147483647]"
        self._src_city = value

    @builtins.property
    def des_city(self):
        """Message field 'des_city'."""
        return self._des_city

    @des_city.setter
    def des_city(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'des_city' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'des_city' field must be an integer in [-2147483648, 2147483647]"
        self._des_city = value
