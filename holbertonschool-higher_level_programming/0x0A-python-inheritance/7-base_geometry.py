#!/usr/bin/python3


class BaseGeometry:

    def area(self):
        """ Write a function that raises type Error

        Arguments:
            self (self): passing self
        Returns:
            None
        """
        raise Exception("area() is not implemented")

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
