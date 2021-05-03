#!/usr/bin/python3
""" prints the first State object from the database hbtn_0e_6_usa
"""
from model_state import Base, State
from sqlalchemy.orm import sessionmaker
from sqlalchemy import (create_engine)
import sys

if __name__ == "__main__":

    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]),
                           pool_pre_ping=True)
    Base.metadata.create_all(engine)

    sesh = sessionmaker(engine)
    OG_sesh = sesh()
    var = OG_sesh.query(State).first()
    if var is None:
        print("Nothing")
    else:
        print("{}: {}".format(var.id, var.name))
    OG_sesh.close()
