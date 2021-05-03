#!/usr/bin/python3
"""  prints the State object with the name passed as argument
"""
from model_state import Base, State
from sqlalchemy.orm import Session
from sqlalchemy import (create_engine)
import sys

if __name__ == "__main__":

    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]),
                           pool_pre_ping=True)
    Base.metadata.create_all(engine)

    sesh = Session(engine)
    var = sesh.query(State).filter(State.name == sys.argv[4]).first()

    if var is None:
        print("Not found")
    else:
        print("{}".format(var.id))
    sesh.close()
