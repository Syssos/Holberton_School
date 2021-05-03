#!/usr/bin/python3
"""
This module creates an empty class
"""


class Square:
    """defines empty square class

    Attributes:
         size (str): Size of the square.
    """
    def __init__(self, size=0):
        """Function to Initialize Square

        Args:
             size (int): size of the Square
        """
        if type(size) != int:
            raise TypeError("size must be integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """gets area of Square.

        Returns:
            The area of the Square.
        """
        return self.__size ** 2

    @property
    def size(self):
        """ Gets private __size attribute.

        Returns:
            The size of the square
        """
        return self.__size

    @size.setter
    def size(self, info):
        """Sets a new information for __size attribute.

        Args:
             value (int): info passed to new size.
        """
        if type(info) != int:
            raise TypeError("size must be an integer")
        if info < 0:
            raise ValueError("size must be >= 0")
        self.__size = info
