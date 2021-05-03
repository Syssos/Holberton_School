#!/usr/bin/python3
"""  adds the State object “Louisiana” to the database hbtn_0e_6_usa
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
    new = State(name="Louisiana")
    sesh.add(new)
    sesh.commit()
    print(new.id)
    sesh.close()
