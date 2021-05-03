#!/usr/bin/python3
''' prints response error codes
'''
import requests
from sys import argv


def error_code():
    url = argv[1]
    req = requests.get(url)
    if (req.status_code == 200):
        print("{}".format(req.text))
    else:
        print("Error code: {}".format(req.status_code))

if __name__ == "__main__":
    error_code()
