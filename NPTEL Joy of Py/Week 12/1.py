'''
Given a sorted list nums in non-decreasing order, where every element appears twice except for one unique element, find and return the single number.
Example 1:
Input
nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]
Output
4
Example 2 :
Input 
nums = [1, 1, 3, 5, 5]
Output
3
Constraints:
n==len(nums)
1<=n<=10^4
'''


def singleNonDuplicate(nums):
    # Initialize the variable to store the result of XOR
    unique = 0
    
    # Iterate through the list and XOR each element
    for num in nums:
        unique ^= num
    
    # Return the unique element
    return unique

# Read input directly (assuming it's provided in the correct format)
input_str = input().strip()  # Read the input and remove leading/trailing whitespace

# Sanitize the input: Remove brackets if present
if input_str.startswith("[") and input_str.endswith("]"):
    input_str = input_str[1:-1].strip()

# Split the input by commas or spaces and convert to integers
try:
    nums = list(map(int, input_str.replace(",", " ").split()))
except ValueError:
    print("Invalid input format")
    exit()

# Find and print the unique element
result = singleNonDuplicate(nums)
print(result)