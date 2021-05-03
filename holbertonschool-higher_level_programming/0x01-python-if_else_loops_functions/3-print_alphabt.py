#!/usr/bin/python3
for x in range(97, 123):
    if x == ord('e') or x == ord('q'):
        continue
    else:
        print('{:s}'.format(chr(x)), end='')
