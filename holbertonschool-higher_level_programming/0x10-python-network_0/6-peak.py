#!/usr/bin/python3
"""function that finds a peak in a list of unsorted integers."""


def find_peak(list_of_integers):
    if len(list_of_integers) == 0:
        return None

    length = len(list_of_integers)
    l, r = 0, length - 1
    return(peak_helper(list_of_integers, l, r))


def peak_helper(list_of_integers, l, r):
    if l == r:
        return(list_of_integers[r])

    m = (l + r) // 2

    if list_of_integers[m] > list_of_integers[m + 1]:
        return(peak_helper(list_of_integers, l, m))
    return(peak_helper(list_of_integers, m + 1, r))
