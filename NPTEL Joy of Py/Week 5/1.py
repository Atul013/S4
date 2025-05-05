from collections import Counter

def count_word_frequencies(text):
    text = text.lower()
    words = text.split()
    word_counts = Counter(words)
    for word, count in word_counts.items():
        print(f"{word}: {count}")

input_text = input().strip()
count_word_frequencies(input_text)
