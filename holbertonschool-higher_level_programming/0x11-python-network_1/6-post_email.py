#!/usr/bin/python3
''' sends a POST request to the passed URL
'''
import requests
from sys import argv


def emailp():
    url = argv[1]
    email = argv[2]
    data = {'email': email}
    req = requests.post(url, data=data)
    print("{}".format(req.text))

if __name__ == "__main__":
    emailp()
