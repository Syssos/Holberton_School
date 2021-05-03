#!/usr/bin/python3
"""
Python script that fetches https://intranet.hbtn.io/status
"""
import urllib.request
from sys import argv


def fetch_link():
    with urllib.request.urlopen(argv[1]) as response:
        head = dict(response.info())
        if 'X-Request-Id' in head:
            print(head['X-Request-Id'])

if __name__ == '__main__':
    fetch_link()
