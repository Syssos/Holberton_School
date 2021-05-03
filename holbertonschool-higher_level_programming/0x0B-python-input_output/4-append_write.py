#!/usr/bin/python3


def append_write(filename="", text=""):
    with open(filename, "a") as file_open:
        return file_open.write(text)
