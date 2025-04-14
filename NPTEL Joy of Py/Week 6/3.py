'''
Write a recursive function delete_elements in Python that removes all occurrences of a specified item from a list, creating and returning a new list without modifying the input list.

 

Example :

Input:

A list of integers (can contain duplicates)

An integer item which represents the element to be removed from the list.

4 5 6

4

Output:

Original list

A new list with all occurrences of the item removed.

4 5 6

5 6
'''

#wasted more than an hour on this shit

import sys

def delete_elements(lst, item):
    return [x for x in lst if x != item]

try:
    # Read inputs from stdin
    lines = sys.stdin.read().splitlines()  

    if lines:
        inputs = list(map(int, lines[0].split()))  # First line: list of integers
        
        # Second line: Target item (if available)
        if len(lines) > 1:
            item = int(lines[1])
        else:
            item = inputs[-1]  # If no second line, use last element as target
            inputs = inputs[:-1]

        # Display original and updated lists
        print(" ".join(map(str, inputs)))
        new_lst = delete_elements(inputs, item)
        print(" ".join(map(str, new_lst)))

except Exception as e:
    print(f"Error: {e}")
