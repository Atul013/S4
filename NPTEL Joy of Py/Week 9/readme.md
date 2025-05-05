

## Week 9: Programming Assignments

This folder contains solutions to the programming assignments for **Week 9** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on dictionary manipulation, mathematical concepts, and sequence analysis.

---

### 📂 File Organization

The `Week_9` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Orange Cap Function

#### Problem Statement
We represent scores of batsmen across a sequence of matches in a two-level dictionary as follows:

```python
{'match1': {'player1': 57, 'player2': 38}, 
 'match2': {'player3': 9, 'player1': 42}, 
 'match3': {'player2': 41, 'player4': 63, 'player3': 91}}
```

Each match is identified by a string, as is each player. The scores are all integers. The names associated with the matches are not fixed (here they are `'match1'`, `'match2'`, `'match3'`), nor are the names of the players. A player need not have a score recorded in all matches.

Define a Python function `orange_cap(d)` that reads a dictionary `d` of this form and identifies the player with the highest total score. Your function should return a pair `(playername, topscore)` where `playername` is a string, the name of the player with the highest score, and `topscore` is an integer, the total score of `playername`.

The input will be such that there are never any ties for the highest total score.

#### Example
**Input**:
```python
{'match1': {'player1': 57, 'player2': 38}, 
 'match2': {'player3': 9, 'player1': 42}, 
 'match3': {'player2': 41, 'player4': 63, 'player3': 91}}
```

**Output**:
```python
('player3', 100)
```

**Input**:
```python
{'test1': {'Pant': 84, 'Kohli': 120}, 
 'test2': {'Pant': 59, 'Gill': 42}}
```

**Output**:
```python
('Pant', 143)
```

---

### Assignment 2: Three Squares Function

#### Problem Statement
A positive integer \( m \) can be expressed as the sum of three squares if it is of the form \( p + q + r \) where \( p, q, r \geq 0 \), and \( p, q, r \) are all perfect squares. For instance, 2 can be written as \( 0 + 1 + 1 \) but 7 cannot be expressed as the sum of three squares. The first numbers that cannot be expressed as the sum of three squares are 7, 15, 23, 28, 31, 39, 47, 55, 60, 63, 71, ... (see Legendre's three-square theorem).

Write a Python function `threesquares(m)` that takes an integer \( m \) as a parameter and returns `True` if \( m \) can be expressed as the sum of three squares and `False` otherwise. If \( m \) is not positive, your function should return `False`.

#### Example
**Input**:
```python
threesquares(2)
```

**Output**:
```python
True
```

**Input**:
```python
threesquares(7)
```

**Output**:
```python
False
```

---

### Assignment 3: Hill or Valley Function

#### Problem Statement
A list of numbers is said to be a **hill** if it consists of an ascending sequence followed by a descending sequence, where each of the sequences is of length at least two. Similarly, a list of numbers is said to be a **valley** if it consists of an descending sequence followed by an ascending sequence. You can assume that consecutive numbers in the input sequence are always different from each other.

Write a Python function `hillvalley(l)` that takes a list `l` of integers and returns `True` if it is a hill or a valley, and `False` otherwise.

#### Examples
```python
>>> hillvalley([1, 2, 3, 5, 4])
True
>>> hillvalley([1, 2, 3, 4, 5])
False
>>> hillvalley([5, 4, 1, 2, 3])
True
>>> hillvalley([5, 4, 3, 2, 1])
False
```
