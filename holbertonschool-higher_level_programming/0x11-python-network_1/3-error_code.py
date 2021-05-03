#!/usr/bin/python3
"""
"""
import urllib.request
from sys import argv


def error_code():
    url = argv[1]
    req = urllib.request.Request(url)
    try:
        with urllib.request.urlopen(req) as response:
            print("{}".format(response.read().decode("utf-8")))
    except urllib.error.HTTPError as e:
        print("Error code: {}".format(e.code))

if __name__ == '__main__':
    error_code()
