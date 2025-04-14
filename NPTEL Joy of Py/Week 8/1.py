'''
Remove Strings from a List of Tuples

You are given a list of tuples, where each tuple contains a mix of integers and strings. Your task is to remove all string elements from each tuple while keeping the original structure of the list.

·       If a tuple becomes empty after removing strings, it should be represented as an empty tuple ().

·       The number of tuples in the output list must be the same as in the input list.

Input Format:

A list of tuples

Output Format:

A list of tuples with all string elements removed.

 

Example :

Input:

[('string', ‘hello’), (2, 225), (3, '111')]

Output:

[(), (2, 225), (3,)]
'''

import sys

def remove_strings(lst):
    return [tuple(item for item in tup if isinstance(item, int)) for tup in lst]

# Read input from standard input
input_data = eval(sys.stdin.read().strip())

# Process the input and print the result
print(remove_strings(input_data))
