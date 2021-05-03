#!/usr/bin/python3
""" 4-main """
from models.rectangle import Rectangle

if __name__ == "__main__":

    r1 = Rectangle(4, 6)
    r1.display()

    print("---")

    try:
        r1 = Rectangle("2", 0)
        r1.display()
    except Exception as e:
        print (e)
