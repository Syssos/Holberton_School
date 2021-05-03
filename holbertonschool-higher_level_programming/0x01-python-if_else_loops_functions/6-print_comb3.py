#!/usr/bin/python3
for x in range(0, 9):
    for z in range(x + 1, 10):
        if x < 8 or z < 9:
            print('{:d}{:d}'.format(x, z), end=", ")
        else:
            print('{:d}{:d}'.format(x, z))
