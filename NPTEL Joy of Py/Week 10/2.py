'''
In the ancient land of Lexiconia, hidden messages are locked behind a common magical prefix. Only those who can decipher the longest common prefix will unveil the wisdom of the lost texts.

Your task is to create a function that accepts a list of words, finds the longest common prefix, and prints the result.

Write a function longest_common_prefix(st) that:

    Accepts a list of strings as input.
    Returns the longest common prefix among all the strings.
    If there is no common prefix, return an empty string ""

    eg: ["interview", "interval", "internet", "integral"]      : "inte"
'''


#
def longestCommonPrefix(st):
    if not st:
        return '""'

    # Start with the first string as prefix
    prefix = st[0]

    for s in st[1:]:
        while not s.startswith(prefix):
            prefix = prefix[:-1]
            if not prefix:
                return '""'

    return f'"{prefix}"'
import ast
input_list = ast.literal_eval(input().strip())
print(longestCommonPrefix(input_list))