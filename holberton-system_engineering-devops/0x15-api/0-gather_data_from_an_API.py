#!/usr/bin/python3
from requests import get
from sys import argv
""" returns information about his/her TODO list progress
"""


def gather_data(e_id):
    """ display on the standard output the employee TODO list progress
    """
    e_url = get("https://jsonplaceholder.typicode.com/users/{}"
                .format(e_id)).json()
    name = e_url["name"]
    tasks = 0
    finished = 0
    task = []
    for val in get("https://jsonplaceholder.typicode.com/todos/").json():
        if val["userId"] == e_id:
            tasks += 1
            if val["completed"]:
                finished += 1
                task.append(val["title"])
    print("Employee {} is done with tasks({}/{}):".format(name, finished,
                                                          tasks))
    for i in task:
        print("\t {}".format(i))

if __name__ == "__main__":
    gather_data(int(argv[1]))
