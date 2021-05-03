#!/usr/bin/python3
for x in range(122, 96, -1):
    i = x
    string = ""
    if i % 2 != 0:
        i -= 32
        string += chr(i)
    else:
        string += chr(i)
    print('{:s}'.format(chr(i)), end='')
