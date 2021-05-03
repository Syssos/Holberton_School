#!/usr/bin/python3
""" This module is designed to host the base classs
"""
import json


class Base:
    """ Base Class """
    __nb_objects = 0

    def __init__(self, id=None):
        """ init method for base class
        """
        if id is None:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
        else:
            self.id = id

    @classmethod
    def save_to_file(cls, list_objs):
        """ saves object to file
        """
        with open('{:s}.json'.format(cls.__name__), "w") as file_open:
            if list_objs is None:
                file_open.write('[]')
            else:
                file_open.write(cls.to_json_string([cls.to_dictionary(x)
                                for x in list_objs]))

    @staticmethod
    def to_json_string(list_dictionaries):
        """ returns my_obj as json string
        """
        if list_dictionaries is None:
            return "[]"
        return json.dumps(list_dictionaries)

    @staticmethod
    def from_json_string(json_string):
        """ takes json string and returns
        """
        new = []
        if json_string is None:
            return new
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """ creates new class from dictionary
        """
        if cls.__name__ is "Rectangle":
            dummy = cls(2, 4)
            dummy.update(**dictionary)
        else:
            dummy = cls(6)
            dummy.update(**dictionary)
        return dummy

    @classmethod
    def load_from_file(cls):
        """ creates list of dictionaries from file
        """
        try:
            with open('{:s}.json'.format(cls.__name__), "r") as file_open:
                new_obj = cls.from_json_string(file_open.read())
            new_list = []
            for x in new_obj:
                new_list.append(cls.create(**x))
            return new_list
        except OSError:
            return []
