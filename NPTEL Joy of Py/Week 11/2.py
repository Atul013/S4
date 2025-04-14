'''
Given a list of integers nums and an integer k, write a Python function to check whether there exists a subsequence (a non-contiguous subset of the list) such that the sum of its elements equals k. Return True if such a subsequence exists, otherwise False.
Example 1 :
Input:
nums = [1, 2, 3, 4, 5]
k = 8
Output:
True

Example 2 : 
Input:
nums = [4, 3, 9, 2]
k = 10

Output:
False

Constraints :

1<=len(nums)<=20
1<=nums[i]<=100
1<=k<=2000
'''

#
def checkSubsequenceSum(nums, k):
    # Use a set to track possible sums
    possible_sums = {0}

    # Iterate through each number in the list
    for num in nums:
        # Update possible sums by adding the current number
        new_sums = {num + s for s in possible_sums}
        possible_sums.update(new_sums)

        # If the target sum is found, return True
        if k in possible_sums:
            return True

    return False
nums = eval(input())
k = int(input())
print(checkSubsequenceSum(nums, k))