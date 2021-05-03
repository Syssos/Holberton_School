#!/usr/bin/python3
""" MyList Class
"""


class MyList(list):
    """ MyList subclass
    """
    def print_sorted(self):
        """ Prints a sorted list
        """
        print(sorted(self))
