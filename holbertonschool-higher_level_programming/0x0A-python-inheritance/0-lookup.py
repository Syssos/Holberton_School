#!/usr/bin/python3


def lookup(obj):
    """ a function that returns the list of available attributes
    and methods of an object

    Arguments:
        obj (obj): object to lookup.
    Returns:
        list of attributes and methods the object has available
    """
    return dir(obj)
