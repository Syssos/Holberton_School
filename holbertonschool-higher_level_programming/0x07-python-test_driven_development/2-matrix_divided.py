#!/usr/bin/python3
"""
This program divides numbers in a matrix
"""


def matrix_divided(matrix, div):
    if isinstance(matrix, list) is False:
        raise TypeError("matrix must be a matrix"
                        "(list of lists) of integers/floats")
    if isinstance(matrix[0], list) is False:
        raise TypeError("matrix must be a matrix "
                        "(list of lists) of integers/floats")
    if isinstance(matrix[1], list) is False:
        raise TypeError("matrix must be a matrix "
                        "(list of lists) of integers/floats")
    if isinstance(div, int) is False:
        raise TypeError("div must be a number")
    if div is 0:
        raise ZeroDivisionError("division by zero")
    if len(matrix[0]) is not len(matrix[1]):
        raise TypeError("div must be a number")
    return [[round(x / div, 2) for x in row] for row in matrix]
