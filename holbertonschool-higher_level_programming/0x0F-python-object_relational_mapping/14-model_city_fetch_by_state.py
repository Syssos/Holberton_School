#!/usr/bin/python3
""" Python file similar to model_state.py named model_city.py
that contains the class definition of a City
"""
from model_city import City
from model_state import Base, State
from sqlalchemy.orm import sessionmaker
from sqlalchemy import (create_engine)
import sys

if __name__ == "__main__":

    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]),
                           pool_pre_ping=True)
    Base.metadata.create_all(engine)

    sesh = sessionmaker(bind=engine)
    OG_sesh = sesh()
    table = OG_sesh.query(City, State)\
                   .filter(State.id == City.state_id).order_by(City.id)
    for city, state in table:
        print("{}: ({}) {}".format(state.name, city.id, city.name))
    OG_sesh.close()
