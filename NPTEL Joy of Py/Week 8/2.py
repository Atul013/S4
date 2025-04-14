'''
Remove Anagram Duplicates and Sort

You are given a sequence of words. Two words are anagrams if they contain the same letters in a different order. Your task is to remove any word that is an anagram of an earlier word while keeping the first occurrence. Finally, print the remaining words in sorted order.

Input Format:

A single line containing space-separated words, where each word consists of lowercase letters only.

Output Format:

A single line containing the remaining words in sorted order, space-separated.

Example:

Input:

code doce ecod framer frame

Output:

code frame framer
'''

import sys

def remove_anagram_duplicates_and_sort(words):
    seen = set()
    unique_words = []
    
    for word in words:
        signature = tuple(sorted(word))  # Create a signature for anagrams
        if signature not in seen:
            seen.add(signature)
            unique_words.append(word)
    
    return " ".join(sorted(unique_words))

if __name__ == "__main__":
    words = sys.stdin.read().strip().split()
    result = remove_anagram_duplicates_and_sort(words)
    print(result)