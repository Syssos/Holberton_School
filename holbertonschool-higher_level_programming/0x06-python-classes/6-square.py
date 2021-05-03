#!/usr/bin/python3
""" This module creates an empty class
"""


class Square:
    """defines empty square class

    Attributes:
         size (str): Size of the square.
    """
    def __init__(self, size=0, position=(0, 0)):
        """Function to Initialize Square

        Args:
             size (int): size of the Square
        """
        self.__size = size
        self.position = position

    def area(self):
        """gets area of Square.

        Returns:
            The area of the Square.
        """
        return self.__size ** 2

    def my_print(self):
        """Prints the square with the character '#' to stdout"""
        if self.size == 0:
            print()
        else:
            x, z = self.position
            for i in range(z):
                print()
            for i in range(self.size):
                print(' ' * x, end='')
                print('#' * self.size)

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

    @property
    def position(self):
        """Gets private __position attribute.

        Returns:
             The position of the Square.
        """
        return self.__position

    @position.setter
    def position(self, info):
        """Sets the info for the __position attribute.

        Args:
             value (int): The info for the new position.
        """
        if type(info) != tuple or len(info) != 2:
            raise TypeError("position must be a tuple of 2 positive integers")
        x, z = info
        if type(x) != int or type(z) != int or x < 0 or z < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = info
