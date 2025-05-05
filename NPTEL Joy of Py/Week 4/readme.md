

## Week 4: Programming Assignments

This folder contains solutions to the programming assignments for **Week 4** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on matrix operations and fundamental Python concepts such as nested lists, loops, and conditional statements.

---

### 📂 File Organization

The `Week_4` folder contains:
- `assignment_1.py`: Solution for Programming Assignment 1.
- `assignment_2.py`: Solution for Programming Assignment 2.
- `assignment_3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Check if a Matrix is Diagonal

#### Problem Statement
Create a Python program that checks whether a given square matrix is diagonal. A **diagonal matrix** is a square matrix (same number of rows and columns) where all the entries outside the main diagonal are zero. The program should prompt the user to input the dimensions of the matrix and then input the matrix elements. The program should then determine whether the matrix is diagonal and print `1` if it is, otherwise print `0`.

#### Input Format
- The first input is an integer `r`, the number of rows and columns in the matrix.
- The next `r` lines each contain `r` integers, representing the elements of each row of the matrix.

#### Output Format
- The output is `1` if the matrix is diagonal, otherwise `0`.

#### Example
**Input**:
```
2
1 0
0 1
```

**Output**:
```
1
```

---

### Assignment 2: Add Transpose of a Matrix by a Scalar

#### Problem Statement
Create a Python program that adds the transpose of a given matrix by a scalar. The program should prompt the user to input the dimensions of the matrix, the elements of the matrix, and the scalar value. The program should then compute the transpose of the matrix, add it by the scalar, and print the resulting matrix.

#### Input Format
- The first input is an integer `r`, the number of rows in the matrix.
- The second input is an integer `c`, the number of columns in the matrix.
- The next `r` lines each contain `c` integers, representing the elements of the matrix.
- The final input is an integer `s`, representing the scalar value.

#### Output Format
- The output consists of `c` lines, each containing `r` integers, representing the elements of the resulting matrix after adding the transpose of the original matrix by the scalar.

#### Example
**Input**:
```
2
3
1 2 3
4 5 6
2
```

**Output**:
```
3 6
4 7
5 8
```

---

### Assignment 3: Check if a Matrix is Symmetric

#### Problem Statement
Create a Python program that checks whether a given square matrix is symmetric. A matrix is symmetric if its transpose is equal to the matrix itself. The program should prompt the user to input the dimensions of the matrix and then input the matrix elements. The program should then determine whether the matrix is symmetric and print `1` if it is, otherwise print `0`.

#### Input Format
- The first input is an integer `r`, the number of rows and columns in the matrix.
- The next `r` lines each contain `r` integers, representing the elements of each row of the matrix.

#### Output Format
- The output is `1` if the matrix is symmetric, otherwise `0`.

#### Example
**Input**:
```
2
1 2
2 1
```

**Output**:
```
1
```

