'''
Median of Matrix

You are given a row-wise sorted matrix of size n×m, where both the number of rows and the number of columns are always odd. Your task is to find the median of the matrix.

The median is the middle number in a sorted list of numbers. In case the list has an even number of elements, the median is the leftmost of the two middle elements.

The matrix is sorted row-wise, but the entire matrix is not necessarily sorted.

You need to find the median from the matrix when all the elements are sorted in ascending order.

Input Format:

The first line contains two integers n and m, representing the number of rows and columns in the matrix.

The next n lines each contain m space-separated integers representing a row of the matrix.

Output Format:

Print the median of the matrix.
Constraints:

    3 ≤ n, m ≤ 100
    n and m are always odd.

Example :
Input:
3 3
1 3 5
2 6 9
3 6 9
Output:
5

Explanation:
The elements in sorted order: [1,2,3,3,5,6,6,9,9].
The total number of elements is 9, so the median is the element at 5th location, which is 5.


'''

def find_median(matrix, n, m):
    # Flatten the matrix into a list
    elements = [num for row in matrix for num in row]
    # Sort the list
    elements.sort()
    # Find the median (since n*m is always odd, median is at index (n*m)//2)
    return elements[(n * m) // 2]

# Input handling
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Output the median
print(find_median(matrix, n, m))
