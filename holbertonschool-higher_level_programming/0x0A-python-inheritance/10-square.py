#!/usr/bin/python3
Rectangle = __import__('9-rectangle').Rectangle


class Square(Rectangle):

    def __init__(self, size):
        """ fucntion that creates a square and adds a size

        Argmunets:
            size (int): size of square
        Returns:
            None
        """
        self.integer_validator("size", size)
        self.__size = size
        super().__init__(self.__size, self.__size)
