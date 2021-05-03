#!/usr/bin/python3
def uppercase(str):
    new = ""
    for x in str:
        new2 = ord(x)
        if ord('a') <= new2 <= ord('z'):
            new2 -= 32
        new += chr(new2)
    print('{:s}'.format(new))
