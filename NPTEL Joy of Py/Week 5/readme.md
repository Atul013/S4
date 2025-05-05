
## Week 5: Programming Assignments

This folder contains solutions to the programming assignments for **Week 5** of the NPTEL course "Joy of Computing Using Python." Each assignment focuses on fundamental Python concepts such as string manipulation, dictionaries, and sorting algorithms.

---

### 📂 File Organization

The `Week_5` folder contains:
- `1.py`: Solution for Programming Assignment 1.
- `2.py`: Solution for Programming Assignment 2.
- `3.py`: Solution for Programming Assignment 3.
- `README.md`: This file, providing details about the assignments.

---

## 📝 Assignment Details

### Assignment 1: The Mystery of Word Frequencies

#### Problem Statement
You are tasked with analyzing a mysterious message that was intercepted. The message seems to contain a series of repeated words, and the challenge is to count how many times each word appears. To solve this, you must write a Python program that takes a string of text and counts the frequency of each word. Make sure your program is case-insensitive, as the secret message is a mix of upper and lower case letters. After counting the occurrences of each word, display the results.

#### Input Format
- A line of text.

#### Output Format
- For all the unique words in the sentence, print `word: frequency`.

#### Example
**Input**:
```
"The quick brown fox jumped over the lazy dog. The quick fox jumped over the dog."
```

**Output**:
```
the: 3
quick: 2
brown: 1
fox: 2
jumped: 2
over: 2
lazy: 1
dog: 2
```

---

### Assignment 2: Merging Dictionaries

#### Problem Statement
You are required to write a Python function `merge_dicts` that takes two dictionaries as input and returns a new dictionary containing all the entries from both input dictionaries. The function should not modify the input dictionaries. In the case where the same key appears in both dictionaries, the corresponding value in the output dictionary should be the sum of the values from both dictionaries.

#### Input Format
- Two dictionaries containing string keys and numerical values in two separate lines.

#### Output Format
- A new dictionary containing all the entries from both dictionaries, with values summed for common keys.

#### Example
**Input**:
```
{'Schuyler': 10, 'Brendan': 15}
{'Aaron': 5, 'Mansi': 20, 'Schuyler': -10}
```

**Output**:
```
{'Schuyler': 0, 'Aaron': 5, 'Mansi': 20, 'Brendan': 15}
```

---

### Assignment 3: Sorting the Royal Manuscripts

#### Problem Statement
You are an apprentice in the Royal Library of the Vijayanagara Empire, home to centuries-old ancient manuscripts filled with knowledge on astronomy, Ayurveda, and warfare. However, a strong monsoon wind has scattered the manuscripts in random order! The Rajguru (Royal Scholar) assigns you a crucial task: sort the manuscripts using the ancient "Bubble Sort" technique. But there’s a rule—you must record the order of manuscripts after every pass, as the Rajguru wishes to witness the sorting magic unfold gradually. Your sorting spell, called "Grantha Sudharaka" (Sacred Manuscript Arranger), can swap two manuscripts at a time, ensuring the heaviest ones settle at the bottom after each pass. Your goal is to restore order to the library as quickly as possible. If there are no swaps, you can stop the process of arranging.

#### Input Format
- List of integers separated by spaces.

#### Output Format
- Every pass output in a single line.

#### Example
**Input**:
```
700 200 500 300
```

**Output**:
```
200 500 300 700
200 300 500 700
200 300 500 700
```
