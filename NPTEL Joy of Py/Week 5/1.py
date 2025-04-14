from collections import Counter

def count_word_frequencies(text):
    text = text.lower()
    words = text.split()
    word_counts = Counter(words)
    for word, count in word_counts.items():
        print(f"{word}: {count}")

input_text = input().strip()
count_word_frequencies(input_text)
''' 
You are tasked with analyzing a mysterious message that was intercepted. The message seems to contain a series of repeated words, and the challenge is to count how many times each word appears. To solve this, you must write a Python program that takes a string of text and counts the frequency of each word.

Make sure your program is case-insensitive, as the secret message is a mix of upper and lower case letters.

After counting the occurrences of each word, display the results.

Input Format:  A line of text

Output format: For all the unique words in the sentence, word: followed by frequency.


Example :

Input :
The quick brown fox jumped over the lazy dog. The quick fox jumped over the dog."

Output:

the: 3

quick: 2

brown: 1

fox: 2

jumped: 2

over: 2

lazy: 1

dog: 2
'''