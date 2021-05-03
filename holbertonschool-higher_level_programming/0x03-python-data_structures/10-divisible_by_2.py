#!/usr/bin/python3


def divisible_by_2(my_list=[]):
    lit = []
    for i in my_list:
        if i % 2 is 0:
            lit.append(True)
        else:
            lit.append(False)
    return (lit)
