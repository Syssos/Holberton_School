#!/usr/bin/python3
""" deletes all State objects with a name containing the letter a
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
    dele = sesh.query(State).order_by(State.id).all()
    for line in dele:
        if 'a' in line.name:
            sesh.delete(line)
    sesh.commit()
    sesh.close()
