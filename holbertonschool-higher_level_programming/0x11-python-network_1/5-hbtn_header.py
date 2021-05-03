#!/usr/bin/python3
""" Python script that fetches https://intranet.hbtn.io/status'
"""
import requests
from sys import argv


def retrive():
    URL = argv[1]
    req = requests.get(URL)
    print("{}".format(req.headers.get('X-Request-Id')))

if __name__ == "__main__":
    retrive()
