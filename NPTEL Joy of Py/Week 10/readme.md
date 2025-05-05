

## Week 10: Programming Assignments

This folder contains solutions to the programming assignments for **Week 10** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on signal processing, string manipulation, and pattern recognition.

---

### 📂 File Organization

The `Week_10` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: Longest Streak of Strong Signals

#### Problem Statement
Emma is a budding software developer working on a signal detection system. One day, her mentor gives her a special list called `nums`. This list only contains two types of signals:
- `1` represents a strong signal.
- `0` represents a weak signal.

Emma's task is to find out the **longest streak of consecutive strong signals (1s)** in the list, which will help her identify the best time period for stable communication. Can you help Emma write a Python function that takes the list `nums` as input and returns the maximum number of consecutive strong signals in the list?

#### Sample Test Cases

| Test Case | Input                | Output |
|-----------|----------------------|--------|
| Test Case 1 | `[1, 1, 1, 1, 1]`    | `5`    |
| Test Case 2 | `[0, 1, 0, 1, 0, 1]` | `1`    |
| Test Case 3 | `[1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1]` | `3`   |
| Test Case 4 | `[1, 0, 1, 1, 1]`    | `3`    |
| Test Case 5 | `[1, 0, 1, 1, 0, 1]` | `2`    |
| Test Case 6 | `[0, 0, 0, 0]`       | `0`    |

---

### Assignment 2: Longest Common Prefix

#### Problem Statement
In the ancient land of Lexiconia, hidden messages are locked behind a common magical prefix. Only those who can decipher the longest common prefix will unveil the wisdom of the lost texts. Your task is to create a function that accepts a list of words, finds the **longest common prefix**, and prints the result.

Write a function `longest_common_prefix(st)` that:
- Accepts a list of strings as input.
- Returns the longest common prefix among all the strings.
- If there is no common prefix, return an empty string `""`.

#### Sample Test Cases

| Test Case | Input                          | Output   |
|-----------|--------------------------------|----------|
| Test Case 1 | `["interview", "interval", "internet", "integral"]` | `"inte"` |
| Test Case 2 | `["dog", "cat", "animal", "monkey"]` | `""`     |
| Test Case 3 | `["apple", "application", "applaud"]` | `"appl"` |
| Test Case 4 | `["apple", "apricot", "apartment"]`   | `"ap"`   |
| Test Case 5 | `["banana", "band", "banner"]`        | `"ban"`  |
| Test Case 6 | `["home", "honey", "horse"]`          | `"ho"`   |

---

### Assignment 3: Isomorphic Scrolls

#### Problem Statement
Once upon a time in the land of Isomorpha, there were two ancient scrolls written in different languages. The wise king of Isomorpha wanted to know if these scrolls conveyed the same message or if they were completely different. He summoned his greatest coder, who had the magical power of **Isomorphic Translation**. The challenge was to determine if every symbol in the first scroll could be mapped to exactly one symbol in the second scroll, without any two symbols sharing the same mapping. However, the order of symbols in both scrolls had to be preserved.

The coder had to write a function to check if the two scrolls were **isomorphic** or not.

#### Examples

**Input**: `s = "egg"`, `t = "add"`

**Output**: `true`

**Explanation**: The `'e'` in string `s` can be replaced with `'a'` of string `t`. The `'g'` in string `s` can be replaced with `'d'` of string `t`. Hence, all characters in `s` can be replaced to get `t`.

**Input**: `s = "apple"`, `t = "bbnbn"`

**Output**: `false`

**Explanation**: One possible try can be:
- The `'a'` in string `s` can be replaced with `'b'` of string `t`.
- The `'p'` in string `s` can be replaced by `'b'` of string `t`.
- The `'l'` in string `s` cannot be replaced by any character of string `t` as all the characters in string `t` are already mapped. Hence, all characters in `s` cannot be replaced to get `t`. It can be proved that no solution exists for this example.
