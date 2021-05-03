#!/usr/bin/python3
""" lists all cities within said state
"""
import MySQLdb
import sys

if __name__ == "__main__":
    conn = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                           passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
    cur = conn.cursor()
    cur.execute("SELECT name FROM cities WHERE state_id =\
    (SELECT id FROM states WHERE name =%s)\
    ORDER BY id ASC", (sys.argv[4],))
    query_rows = cur.fetchall()
    print(", ".join(obj[0] for obj in query_rows))
    cur.close()
    conn.close()
