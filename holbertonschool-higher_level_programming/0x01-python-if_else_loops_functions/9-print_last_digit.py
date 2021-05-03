#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        number *= -1
    num2 = number % 10
    print('{:d}'.format(num2), end='')
    return num2
