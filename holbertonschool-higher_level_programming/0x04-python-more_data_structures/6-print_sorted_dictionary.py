#!/usr/bin/python3


def print_sorted_dictionary(a_dictionary):
    for x, z in sorted(a_dictionary.items()):
        print('{}: {}'.format(x, z))