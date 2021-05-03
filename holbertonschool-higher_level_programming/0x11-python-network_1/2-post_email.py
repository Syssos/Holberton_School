#!/usr/bin/python3
"""
"""
import urllib.request
import urllib.parse
from sys import argv


def Post_email():
    url = argv[1]
    email = argv[2]
    nemail = {'email': email}
    data = urllib.parse.urlencode(nemail)
    data = data.encode('ascii')
    request = urllib.request.Request(url, data)

    with urllib.request.urlopen(request) as response:
        page = response.read()
    print(page.decode('utf-8'))

if __name__ == "__main__":
    Post_email()
