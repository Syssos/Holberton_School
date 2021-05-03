#!/usr/bin/python3
"""
"""


def text_indentation(text):
    char = {'.', '?', ':'}
    if type(text) is not str:
        raise TypeError('text must be a string')
    text_form = text.strip()
    for i, x in enumerate(text_form):
        if x in char:
            print('{:s}\n'.format(x))
        else:
            if text_form[i - 1] in char:
                continue
            if text_form[i] == ' ' and text_form[i - 1] == ' ':
                continue
            print('{:s}'.format(x), end='')
