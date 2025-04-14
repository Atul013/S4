def is_symmetric_matrix(matrix):
    transpose = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix))]
    return matrix == transpose
r = int(input())
matrix = []
for _ in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)
if is_symmetric_matrix(matrix):
    print(1)
else:
    print(0)