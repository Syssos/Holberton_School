#!/usr/bin/python3


def number_of_lines(filename=""):
    line = 0
    with open(filename, "r") as file_open:
        for line, x in enumerate(file_open, 1):
            pass
    return line
