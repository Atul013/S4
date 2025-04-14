'''
Rotate a Rectangular Image by 90 Degrees Clockwise

You are given an image represented by an m x n matrix. Your task is to rotate the image by 90 degrees in the clockwise direction. After rotation, the dimensions of the result matrix will be n x m, as the number of rows and columns will be swapped.

⎡⎣⎢246357⎤⎦⎥→after..rotaion→[674523]


Input Format

Two integers m and n

A matrix of integers of dimension m X n

Output Format

A matrix of integers of dimension n X m

Example :

Input:

4 4

1  2  3  4

5  6  7  8

9  10 11 12

13 14 15 16

 

Output:

13   9   5   1

14  10   6   2

15  11   7   3

16  12   8   4
'''

def rotate_matrix_90_clockwise(matrix):
    return list(zip(*matrix[::-1]))

# Input
m, n = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(m)]

# Rotate the matrix
rotated_matrix = rotate_matrix_90_clockwise(matrix)

# Output
for row in rotated_matrix:
    print(*row)
