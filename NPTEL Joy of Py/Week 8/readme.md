

## Week 8: Programming Assignments

This folder contains solutions to the programming assignments for **Week 8** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on tuple manipulation, string processing, and mathematical operations.

---

### 📂 File Organization

The `Week_8` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Remove Strings from a List of Tuples

#### Problem Statement
You are given a list of tuples, where each tuple contains a mix of integers and strings. Your task is to remove all string elements from each tuple while keeping the original structure of the list. If a tuple becomes empty after removing strings, it should be represented as an empty tuple `()`. The number of tuples in the output list must be the same as in the input list.

#### Input Format
- A list of tuples.

#### Output Format
- A list of tuples with all string elements removed.

#### Example
**Input**:
```python
[('string', 'hello'), (2, 225), (3, '111')]
```

**Output**:
```python
[(), (2, 225), (3,)]
```

---

### Assignment 2: Remove Anagram Duplicates and Sort

#### Problem Statement
You are given a sequence of words. Two words are **anagrams** if they contain the same letters in a different order. Your task is to remove any word that is an anagram of an earlier word while keeping the first occurrence. Finally, print the remaining words in **sorted order**.

#### Input Format
- A single line containing space-separated words, where each word consists of lowercase letters only.

#### Output Format
- A single line containing the remaining words in sorted order, space-separated.

#### Example
**Input**:
```
code doce ecod framer frame
```

**Output**:
```
code frame framer
```

---

### Assignment 3: Multiply Adjacent Elements in a Tuple

#### Problem Statement
In many data processing tasks, cumulative operations like summation or multiplication of adjacent elements are required. This problem focuses on **adjacent element multiplication**, where each pair of consecutive elements in a given tuple is multiplied to generate a new tuple. The input tuple can contain both positive and negative integers, and the goal is to compute a resultant tuple where each element is the product of two adjacent elements in the original tuple.

#### Input Format
- A tuple of integers \( T \) with \( n \) elements (\( n \geq 2 \)).

#### Output Format
- A new tuple \( R \) of size \( n - 1 \) where each element \( R[i] \) is the product of \( T[i] \) and \( T[i+1] \).

#### Example
**Input**:
```python
(1, -5, 7, 8, -10)
```

**Output**:
```python
(-5, -35, 56, -80)
```

**Explanation**:
- \( 1 \times (-5) = -5 \)
- \( (-5) \times 7 = -35 \)
- \( 7 \times 8 = 56 \)
- \( 8 \times (-10) = -80 \)

