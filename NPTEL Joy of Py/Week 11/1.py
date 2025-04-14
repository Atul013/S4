'''
You are given a list of n distinct integers in the range [0, n] (inclusive). This means exactly one number from this range is missing. Your task is to determine and return the missing number.
Input: A list nums containing n distinct integers from 0 to n.
Output: The missing integer in the range [0, n]
Examples:
Input: nums = [0, 2, 3, 1, 4]
Output: 5
The list contains {0, 1, 2, 3, 4}, so 5 is missing.

Input: nums = [0, 1, 2, 4, 5, 6]
Output: 3
The list contains {0, 1, 2, 4, 5, 6}, so 3 is missing
'''


def missingNumber(nums):
    # Calculate the expected sum of numbers from 0 to n using the formula
    n = len(nums)
    expected_sum = n * (n + 1) // 2

    # Calculate the actual sum of the given list
    actual_sum = sum(nums)

    # The difference between expected and actual sum is the missing number
    return expected_sum - actual_sum
nums = list(map(int, input().strip("[]").split(',')))
print(missingNumber(nums))