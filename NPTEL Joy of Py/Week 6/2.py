'''
Alex, a young programmer, discovered a challenge: Convert a decimal number to binary using recursion! The rules were simple—no loops, no built-in functions —only the magic of recursion.

 Steps to convert a decimal number to binary:

·       Divide the number by 2.

·       Store the remainder (0 or 1).

·       Repeat with the quotient until it becomes 0.

·       Read the remainders in reverse order to get the binary number.

 For example, Consider a decimal number 13

13 ÷ 2 = 6, remainder 1

6 ÷ 2 = 3, remainder 0

3 ÷ 2 = 1, remainder 1

1 ÷ 2 = 0, remainder 1

Binary: 1101 (reading from bottom to top)

 Input Format : A positive integer, n

13

Output Format : Binary number

1101
'''

def decimal_to_binary(n):
    if n == 0:
        return '0'
    
    def helper(n):
        if n == 0:
            return ''
        else:
            return helper(n // 2) + str(n % 2)
    
    return helper(n)

# Reading input from stdin
n = int(input().strip())

# Call the function with the input number
binary = decimal_to_binary(n)

print(binary)