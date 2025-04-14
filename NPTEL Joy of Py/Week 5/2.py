'''
You are required to write a Python function merge_dicts that takes two dictionaries as input and returns a new dictionary containing all the entries from both input dictionaries. The function should not modify the input dictionaries.

The dictionaries will have strings as keys and numbers as values. In the case where the same key appears in both dictionaries, the corresponding value in the output dictionary should be the sum of the values from both dictionaries.


You need to ensure the following:

If a key exists in only one of the dictionaries, its value should remain the same in the result.

If a key exists in both dictionaries, sum the values associated with that key.

The output dictionary should include all the keys from both input dictionaries, with updated values as described above.

 

Input Format:

Two dictionaries containing string keys and numerical values in two separate lines.


Output Format:

A new dictionary containing all the entries from both the dictionaries, with values summed for common keys.

 

Example :

Input:

{'Schuyler': 10, 'Brendan': 15}

{'Aaron': 5, 'Mansi': 20, 'Schuyler': -10}

 Output:

{'Schuyler': 0, 'Aaron': 5, 'Mansi': 20, 'Brendan': 15}
'''

def merge_dicts(dict1, dict2):
    result = dict1.copy()
    for key, value in dict2.items():
        if key in result:
            result[key] += value
        else:
            result[key] = value
    return result

# Example usage:
dict1 = eval(input())
dict2 = eval(input())

merged_dict = merge_dicts(dict1, dict2)
print("Merged Dictionary:", merged_dict)