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
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
