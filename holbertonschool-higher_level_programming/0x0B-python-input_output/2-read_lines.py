#!/usr/bin/python3


def read_lines(filename="", nb_lines=0):
    with open(filename, "r") as file_open:
        for line, x in enumerate(file_open):
            if nb_lines <= 0:
                print(x, end="")
            elif nb_lines > 0 and line + 1 <= nb_lines:
                print(x, end="")
