r = int(input())
c = int(input())
matrix = []
for _ in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)
s = int(input())
transpose = [[matrix[j][i] for j in range(r)] for i in range(c)]
result = [[transpose[i][j] + s for j in range(r)] for i in range(c)]
for row in result:
    print(' '.join(map(str, row)))