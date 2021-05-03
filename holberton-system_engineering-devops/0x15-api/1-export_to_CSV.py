#!/usr/bin/python3
from csv import DictWriter, QUOTE_ALL
from requests import get
from sys import argv
""" export data in the CSV format
"""


def gather_data_csv(e_id):
    """ export data in the CSV format
    """
    e_url = get("https://jsonplaceholder.typicode.com/users/{}"
                .format(e_id)).json()
    name = e_url["username"]
    varname = ["userId", "username", "completed", "title"]
    with open("{}.csv".format(e_id), 'w') as f:
        D_write = DictWriter(f, fieldnames=varname, quoting=QUOTE_ALL)
        for val in get("https://jsonplaceholder.typicode.com/todos/").json():
            if val["userId"] == e_id:
                del val["id"]
                val["username"] = name
                D_write.writerow(val)


if __name__ == "__main__":
    gather_data_csv(int(argv[1]))
