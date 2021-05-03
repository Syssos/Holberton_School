#!/usr/bin/python3
"""
Python script that fetches https://intranet.hbtn.io/status
"""
import urllib.request


def fetch_link():
    with urllib.request.urlopen('https://intranet.hbtn.io/status') as response:
        html = response.read()
        form = html.decode('utf-8')

    print("Body response:")
    print("\t- type: {}".format(type(html)))
    print("\t- content: {}".format(html))
    print("\t- utf8 content: {}".format(form))

if __name__ == '__main__':
    fetch_link()
