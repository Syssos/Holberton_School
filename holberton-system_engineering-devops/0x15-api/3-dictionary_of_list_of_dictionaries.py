#!/usr/bin/python3
from json import dump
from requests import get
from sys import argv
""" Records all tasks from all employees
"""


def gather_data_json():
    """ Records all tasks from all employees
    """
    user_dict = {}
    for x in range(1, 11):
        e_url = get("https://jsonplaceholder.typicode.com/users/{}"
                    .format(x)).json()
        user = e_url["username"]
        userinfo = []
        for val in get("https://jsonplaceholder.typicode.com/todos/").json():
            if val["userId"] == x:
                user_info = {}
                user_info["task"] = val["title"]
                user_info["completed"] = val["completed"]
                user_info["username"] = user
                userinfo.append(user_info)
        user_dict[str(x)] = userinfo
        with open("todo_all_employees.json", 'w') as f:
            dump(user_dict, f)


if __name__ == "__main__":
    gather_data_json()
