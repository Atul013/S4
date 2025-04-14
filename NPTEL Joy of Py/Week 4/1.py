def is_diagonal_matrix(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(n):
            if i != j and matrix[i][j] != 0:
                return False
    return True
n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)
if is_diagonal_matrix(matrix):
    print(1)
else:
    print(0)