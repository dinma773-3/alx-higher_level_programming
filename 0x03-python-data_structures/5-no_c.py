#!/usr/bin/python3
def no_c(my_string):
    leng = len(my_string)
    j = 0
    new_str = my_string[:]

    for i in range(leng):
        if (my_string[i] == 'c' or my_string[i] == 'C'):
            new_str = new_str[:(i - j)] + my_string[(i + 1):]
            j += 1

    return (new_str)
