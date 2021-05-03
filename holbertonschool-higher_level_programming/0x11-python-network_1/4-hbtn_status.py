#!/usr/bin/python3
""" Python script that fetches https://intranet.hbtn.io/status'
"""
import requests


def retrive():
    URL = "https://intranet.hbtn.io/status"
    req = requests.get(URL)
    print("Body response:")
    print("\t- type: {}".format(type(req.text)))
    print("\t- content: {}".format(req.text))

if __name__ == "__main__":
    retrive()
