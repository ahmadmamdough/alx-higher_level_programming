#!/usr/bin/python3
"""This is squares vol. 1
"""


class Square:
    """This is a square representaion
    """
    def __init__(self, size=None):
        if (size is not None):
            self.__size = size
