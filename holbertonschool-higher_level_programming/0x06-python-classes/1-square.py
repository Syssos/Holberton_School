#!/usr/bin/python3
""" This module creates an empty class
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
        self.__size = size
