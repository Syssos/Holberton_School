#!/usr/bin/python3


class BaseGeometry:

    def integer_validator(self, name, value):
        """ Function that validated value for name

        Arguments:
            name (str): name string
            value (int): value to validate
        Returns:
            None
        """
        if type(value) is not int:
            raise TypeError("{:s} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{:s} must be greater than 0".format(name))


class Rectangle(BaseGeometry):

    def __init__(self, width, height):
        """ initiates BaseGeometry

        Arguments:
            width (int)
            height (int)
        Returns:
            None
        """
        BaseGeometry.integer_validator(self, "width", width)
        BaseGeometry.integer_validator(self, "height", height)
        self.__width = width
        self.__height = height

    def area(self):
        """ Write a function that raises type Error

        Arguments:
            self (self): passing self
        Returns:
            None
        """
        return self.__width * self.__height

    def __str__(self):
        """ Write a function that raises type Error

        Arguments:
            self (self): passing self
        Returns:
            None
        """
        return("[Rectanlge] {:d}/{:d}".format(self.__width, self.__height))


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

    def __str__(self):

        return ("[Square] {:d}/{:d}".format(self.__size, self.__size))
