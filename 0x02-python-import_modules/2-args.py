#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    arguments = sys.argv[1:]
    num_arguments = len(arguments)

    print("Number of argument(s):", num_arguments)

    if num_arguments == 0:
        print(".")
    else:
        print(":")
        for i, arg in enumerate(arguments, start=1):
            print("{}: {}".format(i, arg))
