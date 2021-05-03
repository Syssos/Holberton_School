#!/usr/bin/python3


def best_score(a_dictionary):
    if a_dictionary:
        so = sorted(a_dictionary, key=a_dictionary.get, reverse=True)
        return (so[0])
    else:
        return (None)
