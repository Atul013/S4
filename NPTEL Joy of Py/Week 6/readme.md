
## Week 6: Programming Assignments

This folder contains solutions to the programming assignments for **Week 6** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on fundamental Python concepts such as array manipulation, recursion, and error handling.

---

### 📂 File Organization

The `Week_6` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: The Treasure Hunt

#### Problem Statement
You are part of an elite team of treasure hunters, and your latest mission is to find the hidden treasure in a mysterious ancient temple. Inside the temple, you discover a series of enchanted scrolls containing arrays of magical numbers. The numbers are encrypted in different arrays, and each scroll has a clue indicating which element in the array holds the key to the treasure. You are given one of these arrays, and the clue on the scroll tells you that the treasure is hidden inside the \( k \)-th smallest number in that array. Your task is to figure out the \( k \)-th smallest number from the array, where \( k \) is smaller than the size of the array, and return it as your answer. The treasure hunters in your team trust you with this task, and the sooner you find the key, the sooner they can open the vault. So, be efficient and find the answer quickly!

#### Input Format
- A list of \( n \) integers.
- An integer \( k \) (where \( k \leq n \)).

#### Output Format
- Return the \( k \)-th smallest element from the array.
- If \( k > n \), then generate an error message: `'The clue k should be smaller than or equal to the list size'`.

#### Example
**Input**:
```
12 3 5 7 19 17 4
4
```

**Output**:
```
7
```

---

### Assignment 2: The Binary Quest

#### Problem Statement
Alex, a young programmer, discovered a challenge: Convert a decimal number to binary using recursion! The rules were simple—no loops, no built-in functions—only the magic of recursion. Steps to convert a decimal number to binary:
1. Divide the number by 2.
2. Store the remainder (0 or 1).
3. Repeat with the quotient until it becomes 0.
4. Read the remainders in reverse order to get the binary number.

#### Example
Consider a decimal number 13:
```
13 ÷ 2 = 6, remainder 1
6 ÷ 2 = 3, remainder 0
3 ÷ 2 = 1, remainder 1
1 ÷ 2 = 0, remainder 1
Binary: 1101 (reading from bottom to top)
```

#### Input Format
- A positive integer, \( n \).

#### Output Format
- Binary number.

#### Example
**Input**:
```
13
```

**Output**:
```
1101
```

---

### Assignment 3: Removing an Element Recursively

#### Problem Statement
Write a recursive function `delete_elements` in Python that removes all occurrences of a specified item from a list, creating and returning a new list without modifying the input list.

#### Input Format
- A list of integers (can contain duplicates).
- An integer item which represents the element to be removed from the list.

#### Output Format
- Original list.
- A new list with all occurrences of the item removed.

#### Example
**Input**:
```
4 5 6
4
```

**Output**:
```
Original list
4 5 6
New list
5 6
```
