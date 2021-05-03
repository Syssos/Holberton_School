#!/usr/bin/python3


def print_reversed_list_integer(my_list=[]):
    if my_list is not None:
        length = len(my_list)

        for i in range(length-1, -1, -1):
            if i == length:
                i -= 1
                print('{:d}'.format(my_list[i]))
            else:
                print('{:d}'.format(my_list[i]))
