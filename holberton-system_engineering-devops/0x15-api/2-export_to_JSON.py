#!/usr/bin/python3
from json import dump
from requests import get
from sys import argv
""" export data in the JSON format
"""


def gather_data_json(e_id):
    """ export data in the JSON format
    """
    e_url = get("https://jsonplaceholder.typicode.com/users/{}"
                .format(e_id)).json()
    user = e_url["username"]
    userinfo = []
    for val in get("https://jsonplaceholder.typicode.com/todos/").json():
        if val["userId"] == e_id:
            user_info = {}
            user_info["task"] = val["title"]
            user_info["completed"] = val["completed"]
            user_info["username"] = user
            userinfo.append(user_info)
    user_dict = {str(e_id): userinfo}
    with open("{}.json".format(e_id), 'w') as f:
        dump(user_dict, f)


if __name__ == "__main__":
    gather_data_json(int(argv[1]))
