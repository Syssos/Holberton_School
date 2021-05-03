#!/usr/bin/python3
""" Program that prints size of square
"""


def print_square(size):
    """ prints a square made of '#'

    Arguments:
        size (int): Size of square

    Raises:
        TypeError: if size is not an int
        ValueError: if size is negative or equal to zero
    """
    if isinstance(size, int) is False:
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    if size is 0:
        print()
    else:
        for x in range(size):
            print("#" * size)
