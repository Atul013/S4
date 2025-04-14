'''
Multiply Adjacent Elements in a Tuple

In many data processing tasks, cumulative operations like summation or multiplication of adjacent elements are required. This problem focuses on adjacent element multiplication, where each pair of consecutive elements in a given tuple is multiplied to generate a new tuple. The input tuple can contain both positive and negative integers, and the goal is to compute a resultant tuple where each element is the product of two adjacent elements in the original tuple.

 

Input Format:

A tuple of integers T with n elements (n ≥ 2)

Output Format:

A new tuple R of size (n - 1) where each element R[i] is the product of T[i] and T[i+1].

 

Example:

Input:

(1, -5, 7, 8, -10)

Output:

(-5, -35, 56, -80)

Explanation:

·       1 × (-5) = -5

·       (-5) × 7 = -35

·       7 × 8 = 56

·       8 × (-10) = -80
'''

def multiply_adjacent_elements(T):
    return tuple(T[i] * T[i + 1] for i in range(len(T) - 1))

# Read tuple input correctly
T = tuple(map(int, input().strip("()").split(",")))  # Convert string tuple input to actual tuple

# Compute and print result
R = multiply_adjacent_elements(T)
print(R)
