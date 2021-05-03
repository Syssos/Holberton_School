#!/usr/bin/python3
""" Model for City
"""
import sqlalchemy
from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.ext.declarative import declarative_base
from model_state import Base, State
from sqlalchemy.orm import relationship


class City(Base):
    """
    City Class
    """

    __tablename__ = 'cities'

    id = Column(Integer, autoincrement=True, nullable=False,
                primary_key=True, unique=True)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer, ForeignKey(State.id), nullable=False)
