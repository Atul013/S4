'''
Given a string s representing a large integer, return the largest-valued odd integer (as a string) that is a substring of s.

Note:

    The result should not contain any leading zeros.
    The input string s may contain leading zeros.

Constraints :
1 <= s.length <= 10^3
'0' <= s[i] <= '9'
Examples:

Example 1:
Input:
s = "5347"

Output:
"5347"

Explanation:

All possible odd numbers: {5, 3, 53, 347, 5347}
The largest odd number is "5347".

Example 2:
Input:
s = "0214638"

Output:
"21463"

Explanation:
Valid odd numbers: {1, 3, 21, 63, 463, 1463, 21463}
Leading zeros cannot be included.
The largest odd number is "21463".

Example 3:
Input:
s = "0032579"

Output:
"32579"
'''

#
def largeOddNum(s):
    ind = -1
    
    # Iterate through the string from the end to the beginning
    for i in range(len(s) - 1, -1, -1):
        # Break if an odd digit is found
        if (int(s[i]) % 2) == 1:
            ind = i
            break
    
    # Skipping any leading zeroes
    i = 0
    while i <= ind and s[i] == '0':
        i += 1
    
    # Return the largest odd number substring inside double quotes
    return f'"{s[i:ind + 1]}"'  # Add double quotes around the result
s = input()
s = s.strip('"').strip("'")
print(largeOddNum(s))