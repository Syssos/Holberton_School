#!/usr/bin/python3


class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        new_dict = {}
        if attrs is None:
            return self.__dict__
        for items, value in self.__dict__.items():
            if items in attrs:
                new_dict[items] = value
        return new_dict

    def reload_from_json(self, json):
        for items, value in json.items():
            setattr(self, items, value)
