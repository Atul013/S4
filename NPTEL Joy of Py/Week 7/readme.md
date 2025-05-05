

## Week 7: Programming Assignments

This folder contains solutions to the programming assignments for **Week 7** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on matrix operations, mathematical concepts, and image manipulation.

---

### 📂 File Organization

The `Week_7` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Magic Square

#### Problem Statement
A magic square of order \( n \) is a square arrangement of \( n^2 \) numbers, typically distinct integers, where the sum of the \( n \) numbers in each row, each column, and both main diagonals is the same constant. It consists of the integers from 1 to \( n^2 \). The constant sum of each row, column, and diagonal in a magic square is known as the magic constant or magic sum, \( M \). For a normal magic square, this constant depends solely on \( n \) and is given by the formula:

\[
M = n(n^2 + 1) / 2
\]

Given a matrix, check whether it's a Magic Square or not.

#### Input Format
- An integer value for \( n \) (\( n > 2 \)).
- An \( n \times n \) matrix.

#### Output Format
- If the given matrix is a Magic Square, print `"Magic Matrix"`, otherwise print `"Not a Magic Matrix"`.

#### Example
**Input**:
```
3
2 7 6
9 5 1
4 3 8
```

**Output**:
```
Magic Matrix
```

---

### Assignment 2: Median of Matrix

#### Problem Statement
You are given a row-wise sorted matrix of size \( n \times m \), where both the number of rows and the number of columns are always odd. Your task is to find the median of the matrix. The median is the middle number in a sorted list of numbers. In case the list has an even number of elements, the median is the leftmost of the two middle elements. The matrix is sorted row-wise, but the entire matrix is not necessarily sorted. You need to find the median from the matrix when all the elements are sorted in ascending order.

#### Input Format
- The first line contains two integers \( n \) and \( m \), representing the number of rows and columns in the matrix.
- The next \( n \) lines each contain \( m \) space-separated integers representing a row of the matrix.

#### Output Format
- Print the median of the matrix.

#### Constraints
- \( 3 \leq n, m \leq 100 \)
- \( n \) and \( m \) are always odd.

#### Example
**Input**:
```
3 3
1 3 5
2 6 9
3 6 9
```

**Output**:
```
5
```

**Explanation**:
The elements in sorted order: `[1, 2, 3, 3, 5, 6, 6, 9, 9]`. The total number of elements is 9, so the median is the element at the 5th location, which is 5.

---

### Assignment 3: Rotate a Rectangular Image by 90 Degrees Clockwise

#### Problem Statement
You are given an image represented by an \( m \times n \) matrix. Your task is to rotate the image by 90 degrees in the clockwise direction. After rotation, the dimensions of the result matrix will be \( n \times m \), as the number of rows and columns will be swapped.

#### Input Format
- Two integers \( m \) and \( n \).
- A matrix of integers of dimension \( m \times n \).

#### Output Format
- A matrix of integers of dimension \( n \times m \).

#### Example
**Input**:
```
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

**Output**:
```
13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
```

