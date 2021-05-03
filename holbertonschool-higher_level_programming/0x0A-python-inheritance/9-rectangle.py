#!/usr/bin/python3
BaseGeometry = __import__('7-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):

    def __init__(self, width, height):
        """ initiates BaseGeometry

        Arguments:
            width (int): width of rectangle
            height (int): Height of the rectanlle
        Returns:
            None
        """
        self.integer_validator("width", width)
        self.integer_validator("height", height)
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
        return("[Rectangle] {:d}/{:d}".format(self.__width, self.__height))
