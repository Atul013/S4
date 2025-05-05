

## Week 11: Programming Assignments

This folder contains solutions to the programming assignments for **Week 11** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on number manipulation, subsequences, and string processing.

---

### 📂 File Organization

The `Week_11` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Find the Missing Number

#### Problem Statement
You are given a list of \( n \) distinct integers in the range \([0, n]\) (inclusive). This means exactly one number from this range is missing. Your task is to determine and return the missing number.

#### Input
- A list `nums` containing \( n \) distinct integers from \( 0 \) to \( n \).

#### Output
- The missing integer in the range \([0, n]\).

#### Examples
**Input**: `nums = [0, 2, 3, 1, 4]`

**Output**: `5`

**Explanation**: The list contains \{0, 1, 2, 3, 4\}, so 5 is missing.

**Input**: `nums = [0, 1, 2, 4, 5, 6]`

**Output**: `3`

**Explanation**: The list contains \{0, 1, 2, 4, 5, 6\}, so 3 is missing.

---

### Assignment 2: Subsequence Sum Check

#### Problem Statement
Given a list of integers `nums` and an integer `k`, write a Python function to check whether there exists a subsequence (a non-contiguous subset of the list) such that the sum of its elements equals `k`. Return `True` if such a subsequence exists, otherwise return `False`.

#### Input
- A list of integers `nums`.
- An integer `k`.

#### Output
- `True` if a subsequence with sum `k` exists, otherwise `False`.

#### Constraints
- \( 1 <= len(nums) <= 20 \)
- \( 1<= nums[i] <= 100 \)
- \( 1 <= k <= 2000 \)

#### Examples
**Example 1**:
**Input**:
```python
nums = [1, 2, 3, 4, 5]
k = 8
```

**Output**:
```python
True
```

**Explanation**: The subsequence \[3, 5\] sums to 8.

**Example 2**:
**Input**:
```python
nums = [4, 3, 9, 2]
k = 10
```

**Output**:
```python
False
```

**Explanation**: No subsequence sums to 10.

---

### Assignment 3: Largest Odd Substring

#### Problem Statement
Given a string `s` representing a large integer, return the largest-valued odd integer (as a string) that is a substring of `s`. Note:
- The result should not contain any leading zeros.
- The input string `s` may contain leading zeros.

#### Constraints
- \( 1 <= s.length <= 10^3 \)
- \( '0' <= s[i] <= '9' \)

#### Examples
**Example 1**:
**Input**:
```python
s = "5347"
```

**Output**:
```python
"5347"
```

**Explanation**: All possible odd numbers: \{5, 3, 53, 347, 5347\}. The largest odd number is `"5347"`.

**Example 2**:
**Input**:
```python
s = "0214638"
```

**Output**:
```python
"21463"
```

**Explanation**: Valid odd numbers: \{1, 3, 21, 63, 463, 1463, 21463\}. Leading zeros cannot be included. The largest odd number is `"21463"`.

**Example 3**:
**Input**:
```python
s = "0032579"
```

**Output**:
```python
"32579"
```

**Explanation**: Valid odd numbers: \{3, 5, 7, 9, 25, 57, 79, 257, 579, 325, 2579, 3257, 32579\}. The largest odd number is `"32579"`.

