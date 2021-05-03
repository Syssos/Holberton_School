#!/usr/bin/python3
def remove_char_at(str, n):

    string = ""
    z = 0
    for x in str:
        if z != n:
            string += x
        z += 1
    return(string)
