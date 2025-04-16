'''
A list of numbers is said to be a hill if it consists of an ascending sequence followed by a descending sequence, where each of the sequences is of length at least two. Similarly, a list of numbers is said to be a valley if it consists of an descending sequence followed by an ascending sequence. You can assume that consecutive numbers in the input sequence are always different from each other.

Write a Python function hillvalley(l) that takes a list l of integers and returns True if it is a hill or a valley, and False otherwise.

Here are some examples to show how your function should work.

>>> hillvalley([1,2,3,5,4])
True

>>> hillvalley([1,2,3,4,5])
False

>>> hillvalley([5,4,1,2,3])
True

>>> hillvalley([5,4,3,2,1])
False
'''


#
def hillvalley(l):
    # If the list is too short to form a valid hill or valley
    if len(l) < 4:
        return False
    
    # Loop through each possible index where the list could transition from ascending to descending or vice versa
    for i in range(1, len(l) - 1):
        # Check for hill pattern: strictly increasing followed by strictly decreasing
        # Check strictly increasing part
        is_increasing = True
        for j in range(i):
            if l[j] >= l[j + 1]:
                is_increasing = False
                break
        
        # Check strictly decreasing part
        is_decreasing = True
        for j in range(i, len(l) - 1):
            if l[j] <= l[j + 1]:
                is_decreasing = False
                break
        
        # If both parts are valid, it's a hill
        if is_increasing and is_decreasing:
            return True
        
        # Check for valley pattern: strictly decreasing followed by strictly increasing
        # Check strictly decreasing part
        is_decreasing = True
        for j in range(i):
            if l[j] <= l[j + 1]:
                is_decreasing = False
                break
        
        # Check strictly increasing part
        is_increasing = True
        for j in range(i, len(l) - 1):
            if l[j] >= l[j + 1]:
                is_increasing = False
                break
        
        # If both parts are valid, it's a valley
        if is_decreasing and is_increasing:
            return True
    
    # If no valid hill or valley pattern is found
    return False
import ast
input_list = ast.literal_eval(input().strip())

print(hillvalley(input_list))
