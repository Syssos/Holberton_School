#!/usr/bin/python3
""" Rectangle class
"""
from models.base import Base


class Rectangle(Base):
    """ Rectangle class that inherits from Base
    """
    def __init__(self, width, height, x=0, y=0, id=None):
        """ sets up an instance of the rectangle class
        """
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        """Returns the width of the Rectangle object.
        Returns:
            The value of width.
        """
        return (self.__width)

    @width.setter
    def width(self, width):
        """Sets the width of the Rectangle object.
        Args:
            width (int): The value to set width to.
        """
        if not isinstance(width, int):
            raise TypeError("width must be an integer")
        if width <= 0:
            raise ValueError("width must be > 0")
        self.__width = width

    @property
    def height(self):
        """Returns the height of the Rectangle object.
        Returns:
            the value of height
        """
        return self.__height

    @height.setter
    def height(self, height):
        """Sets the height of the Rectangle object.
        Args:
            height (int): The value to set height to.
        """
        if not isinstance(height, int):
            raise TypeError("height must be an integer")
        if height <= 0:
            raise ValueError("height must be > 0")
        self.__height = height

    @property
    def x(self):
        """Returns the value x of the Rectangle object.
        Returns:
            The value of x.
        """
        return (self.__x)

    @x.setter
    def x(self, x):
        """Sets x of the Rectangle object.
        Args:
            x (int): The value to set x to.
        """
        if isinstance(x, int) is False:
            raise TypeError("x must be an integer")
        if x < 0:
            raise ValueError("x must be >= 0")
        self.__x = x

    @property
    def y(self):
        """Returns y of the Rectangle object.
        Returns:
            the value of y
        """
        return self.__y

    @y.setter
    def y(self, y):
        """Sets y of the Rectangle object.
        Args:
            y (int): The value to set y to.
        """
        if isinstance(y, int) is False:
            raise TypeError("y must be an integer")
        if y < 0:
            raise ValueError("y must be >= 0")
        self.__y = y

    def area(self):
        """Calculates the area of the Rectangle.
        Returns:
            The area of the Rectangle.
        """
        return (self.__height * self.__width)

    def display(self):
        """Prints the Rectangle object.
        """
        sym = '#'
        width = self.width
        height = self.height
        x = self.x
        y = self.y
        if width < 0 or height < 0:
            print("")
        else:
            for z in range(y):
                print("")
            for v in range(height):
                for c in range(x):
                    print(" ", end="")
                for b in range(width):
                    print(sym, end="")
                print("")

    def __str__(self):
        """ prints string for Rectangle
        """
        w = self.width
        h = self.height
        x = self.x
        y = self.y
        i = self.id

        return("[Rectangle] ({}) {}/{} - {}/{}".format(i, x, y, w, h))

    def update(self, *args, **kwargs):
        """ updates current class instance
        Arguments:
            args (list): arguemts
            kwargs (dict): dictionary of arguments
        """
        new = ["id", "width", "height", "x", "y"]
        for pos, val in enumerate(args):
            setattr(self, new[pos], val)
        for key in kwargs:
            setattr(self, key, kwargs[key])

    def to_dictionary(self):
        """ returns a dictionary
        """
        contents = ['id', 'width', 'height', 'x', 'y']
        lis = [self.id, self.width, self.height, self.x, self.y]
        new_dict = {}
        for i in range(len(contents)):
            new_dict[contents[i]] = lis[i]
        return new_dict
