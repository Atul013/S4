'''
Write a Python function subsequence(l1,l2) that takes two sorted lists as arguments and returns True if the the first list is a subsequence of the second list, and returns False otherwise.

A subsequence of a list is obtained by dropping some values. Thus, [2,3,4] and [2,2,5] are subsequences of [2,2,3,4,5], but [2,4,4] and [2,4,3] are not.

For Example : 

Input :

subsequence([2,2,5],[2,2,3,4,5])

Output :

True 
'''

def subsequence(l1, l2):
    i, j = 0, 0
    while i < len(l1) and j < len(l2):
        if l1[i] == l2[j]:
            i += 1
        j += 1
    return i == len(l1)
