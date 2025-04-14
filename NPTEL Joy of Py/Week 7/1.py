'''Magic Square

A magic square of order n is a square arrangement of n2 numbers, typically distinct integers, where the sum of the n numbers in each row, each column, and both main diagonals is the same constant. It consists of the integers from 1 to .

The constant sum of each row, column, and diagonal in a magic square is known as the magic constant or magic sum, M. For a normal magic square, this constant depends solely on n and is given by the formula:

[Math Processing Error]

For normal magic squares of order n = 3,4,5,...,

the magic constants are: 15,34,65,111,175,260,...
Given a matrix, check whether it’s Magic Square or not.

Input Format:
An integer value for n (n>2)
An nXn matrix

Output Format:
If the given matrix is magic square then print “Magic Matrix”, otherwise “Not a Magic Matrix

Example :
Input
3
2 7 6
9 5 1
4 3 8

Output
Magic Matrix
'''
def is_magic_square(matrix, n):
    magic_sum = n * (n**2 + 1) // 2  # Formula for magic constant
    
    # Check if all numbers from 1 to n^2 are present
    expected_numbers = set(range(1, n**2 + 1))
    if set(sum(matrix, [])) != expected_numbers:
        print("Not a Magic Matrix")
        return
    
    # Check row sums
    for row in matrix:
        if sum(row) != magic_sum:
            print("Not a Magic Matrix")
            return
    
    # Check column sums
    for col in range(n):
        if sum(matrix[row][col] for row in range(n)) != magic_sum:
            print("Not a Magic Matrix")
            return
    
    # Check diagonal sums
    if sum(matrix[i][i] for i in range(n)) != magic_sum or sum(matrix[i][n-i-1] for i in range(n)) != magic_sum:
        print("Not a Magic Matrix")
        return
    
    print("Magic Matrix")

# Read input
n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Check magic square
is_magic_square(matrix, n)

