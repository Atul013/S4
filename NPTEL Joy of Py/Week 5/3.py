'''
You are an apprentice in the Royal Library of the Vijayanagara Empire, home to centuries-old ancient manuscripts filled with knowledge on astronomy, Ayurveda, and warfare. However, a strong monsoon wind has scattered the manuscripts in random order!

The Rajguru (Royal Scholar) assigns you a crucial task: sort the manuscripts using the ancient "Bubble Sort" technique. But there’s a rule—you must record the order of manuscripts after every pass, as the Rajguru wishes to witness the sorting magic unfold gradually.

Your sorting spell, called "Grantha Sudharaka" (Sacred Manuscript Arranger), can swap two manuscripts at a time, ensuring the heaviest ones settle at the bottom after each pass. Your goal is to restore order to the library as quickly as possible. If there are no swaps, you can stop the process of arranging.

Can you help bring back order to the Royal Library of Vijayanagara?

Input Format :

List of integers separated by spaces.

Output Format :

Every pass output in a single line.

Example:

Input

700 200 500 300

Output

200 500 300 700 

200 300 500 700 

200 300 500 700  
'''

def print_array(arr):
    print(" ".join(map(str, arr)))

def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        print_array(arr)
        if not swapped:
            break

# Read input directly as a list of integers
arr = list(map(int, input().split()))

# Perform bubble sort
bubble_sort(arr)
