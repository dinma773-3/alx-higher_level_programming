#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    mat = len(matrix)
    for i in range(mat):
        mat1 = len(matrix[i])
        for j in range(mat1):
            if j != 0:
                print(" ", end='')
            print("{:d}".format(matrix[i][j]), end='')
        print()
