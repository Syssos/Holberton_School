#!/usr/bin/python3


def read_file(filename=""):
    with open(filename, "r") as file_open:
        for line in file_open:
            print(line, end="")
