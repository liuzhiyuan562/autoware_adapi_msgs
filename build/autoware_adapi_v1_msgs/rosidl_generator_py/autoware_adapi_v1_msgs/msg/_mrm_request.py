# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/MrmRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrmRequest(type):
    """Metaclass of message 'MrmRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CANCEL': 1,
        'DELEGATE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.MrmRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrm_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrm_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrm_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrm_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrm_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CANCEL': cls.__constants['CANCEL'],
            'DELEGATE': cls.__constants['DELEGATE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MrmRequest.__constants['UNKNOWN']

    @property
    def CANCEL(self):
        """Message constant 'CANCEL'."""
        return Metaclass_MrmRequest.__constants['CANCEL']

    @property
    def DELEGATE(self):
        """Message constant 'DELEGATE'."""
        return Metaclass_MrmRequest.__constants['DELEGATE']


class MrmRequest(metaclass=Metaclass_MrmRequest):
    """
    Message class 'MrmRequest'.

    Constants:
      UNKNOWN
      CANCEL
      DELEGATE
    """

    __slots__ = [
        '_strategy',
        '_user',
    ]

    _fields_and_field_types = {
        'strategy': 'uint16',
        'user': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.strategy = kwargs.get('strategy', int())
        self.user = kwargs.get('user', str())

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
        if self.strategy != other.strategy:
            return False
        if self.user != other.user:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def strategy(self):
        """Message field 'strategy'."""
        return self._strategy

    @strategy.setter
    def strategy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strategy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'strategy' field must be an unsigned integer in [0, 65535]"
        self._strategy = value

    @builtins.property
    def user(self):
        """Message field 'user'."""
        return self._user

    @user.setter
    def user(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user' field must be of type 'str'"
        self._user = value
