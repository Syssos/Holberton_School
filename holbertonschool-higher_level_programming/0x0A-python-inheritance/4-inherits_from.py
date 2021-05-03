#!/usr/bin/python3


def inherits_from(obj, a_class):
    """ Write a function that returns True if the object is exactly an instance of
    the specified class, otherwise False

    Arguments:
        obj (obj): object to compare
        a_class
    Returns:
        sorted list
    """
    if issubclass(type(obj), a_class) and type(obj) is not a_class:
        return True
    else:
        return False
