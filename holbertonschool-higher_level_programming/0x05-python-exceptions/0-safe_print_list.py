#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    var = 0
    for i in range(x):
        try:
            print(my_list[i], end='')
        except IndexError:
            print()
            return (var)
        else:
            var += 1
    print()
    return (var)
