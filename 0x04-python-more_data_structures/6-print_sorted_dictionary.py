#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    list_od = list(a_dictionary.keys())
    list_od.sort()
    for i in list_od:
        print("{}: {}".format(i, a_dictionary.get(i)))
