#!/usr/bin/python3
""" class square inherits from rectangle
"""
from models.rectangle import Rectangle


class Square(Rectangle):
    """ class Square
    """
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)
        self.size = size

    @property
    def size(self):
        """Returns the value size of the Rectangle object.
        Returns:
            The value of size.
        """
        return self.width

    @size.setter
    def size(self, size):
        """Sets size of the square object.
        Args:
            size (int): The value to set size to.
        """
        self.width = size
        self.height = size

    def __str__(self):
        """ Returns string for square
        """
        size = self.size
        x = self.x
        y = self.y
        ide = self.id

        return("[Square] ({:d}) {:d}/{:d} - {:d}".format(ide, x, y, size))

    def update(self, *args, **kwargs):
        """ This will updated current class
        """
        new = ["id", "size", "x", "y"]
        for pos, val in enumerate(args):
            setattr(self, new[pos], val)
        for key in kwargs:
            setattr(self, key, kwargs[key])

    def to_dictionary(self):
        """ returns a dictionary
        """
        contents = ['id', 'size', 'x', 'y']
        lis = [self.id, self.size, self.x, self.y]
        new_dict = {}
        for i in range(len(contents)):
            new_dict[contents[i]] = lis[i]
        return new_dict
