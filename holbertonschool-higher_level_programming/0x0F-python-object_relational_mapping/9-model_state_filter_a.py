#!/usr/bin/python3
""" lists all State objects that contain the letter a
"""
from model_state import Base, State
from sqlalchemy.orm import sessionmaker
from sqlalchemy import (create_engine)
import sys
import MySQLdb

if __name__ == "__main__":

    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]),
                           pool_pre_ping=True)
    Base.metadata.create_all(engine)

    sesh = sessionmaker(engine)
    OG_sesh = sesh()
    for obj in OG_sesh.query(State).filter(State.name.like('%a%')):
        print("{}: {}".format(obj.id, obj.name))
    OG_sesh.close()
