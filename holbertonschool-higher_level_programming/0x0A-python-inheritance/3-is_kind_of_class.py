#!/usr/bin/python3


def is_kind_of_class(obj, a_class):
        """ Write a function that returns True if the object is exactly an instance
        of the specified class, otherwise False

        Arguments:
            obj (obj): object to compare
            a_class
        Returns:
            sorted list
        """
        if isinstance(obj, a_class):
                return True
        else:
                return False
