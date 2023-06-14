#!/usr/bin/python3
def uniq_add(my_list=[]):
    uniq_add = set(my_list)
    num = 0

    for i in uniq_add:
        num += i

    return (num)
