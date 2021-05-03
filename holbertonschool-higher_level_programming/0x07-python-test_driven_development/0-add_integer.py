#!/usr/bin/python3
""" program that adds two integers
"""


def add_integer(a, b=98):
    """ adds a and b

    Arguments:
        a (int): number to add
        b (int) (default 98): second number to add

    Return:
        Reuturns product of a and b
    Raises:
       TypeError: error if none int
    """

    if isinstance(a, (int, float)) is False:
        raise TypeError("a must be an integer")
    if isinstance(b, (int, float)) is False:
        raise TypeError("b must be an integer")
    return(int(a) + int(b))
