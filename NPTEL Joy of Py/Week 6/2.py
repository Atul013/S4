

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
