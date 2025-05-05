

## Week 12: Programming Assignments

This folder contains solutions to the programming assignments for **Week 12** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on sorted lists, frequency analysis, and sequence validation.

---

### 📂 File Organization

The `Week_12` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Find the Single Element in a Sorted List

#### Problem Statement
Given a sorted list `nums` in non-decreasing order, where every element appears **twice** except for **one unique element**, find and return the single number.

#### Examples
**Example 1**:
**Input**:
```python
nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]
```

**Output**:
```python
4
```

**Example 2**:
**Input**:
```python
nums = [1, 1, 3, 5, 5]
```

**Output**:
```python
3
```

#### Constraints
- \( n == len(nums) \)
- \( 1 <= n <= 10^4 \)

---

### Assignment 2: Characters by Frequency

#### Problem Statement
You are given a string `s` consisting of only lowercase English letters. Your task is to return a list of unique characters from the string, sorted in descending order based on their frequency of occurrence. If two or more characters have the same frequency, they should be sorted in alphabetical order.

#### Input
- A string `s`.
- The string consists of only lowercase English characters (`'a'` to `'z'`).

#### Output
- A list of unique characters sorted by frequency (highest to lowest).
- If characters have the same frequency, they should appear in alphabetical order.

#### Example 1
**Input**:
```python
s = "tree"
```

**Output**:
```python
['e', 'r', 't']
```

#### Example 2
**Input**:
```python
s = "bbccddaaa"
```

**Output**:
```python
['a', 'b', 'c', 'd']
```

**Explanation**: The frequency of each character:
- `'a'` → 3
- `'b'` → 2
- `'c'` → 2
- `'d'` → 2

---

### Assignment 3: Check if One List is a Subsequence of Another

#### Problem Statement
Write a Python function `subsequence(l1, l2)` that takes two sorted lists as arguments and returns `True` if the first list is a subsequence of the second list, and returns `False` otherwise. A subsequence of a list is obtained by dropping some values. Thus, `[2, 3, 4]` and `[2, 2, 5]` are subsequences of `[2, 2, 3, 4, 5]`, but `[2, 4, 4]` and `[2, 4, 3]` are not.

#### Example
**Input**:
```python
subsequence([2, 2, 5], [2, 2, 3, 4, 5])
```

**Output**:
```python
True
```
