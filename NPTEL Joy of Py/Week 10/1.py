'''
Emma is a budding software developer working on a signal detection system. One day, her mentor gives her a special list called nums. This list only contains two types of signals:

    1 represents a strong signal.
    0 represents a weak signal.

Emma's task is to find out the longest streak of consecutive strong signals (1s) in the list, which will help her identify the best time period for stable communication.

Can you help Emma write a Python function that takes the list nums as input and returns the maximum number of consecutive strong signals in the list?
    
 Sample Test Cases

	                  Input 	                Output
Test Case 1 	

                    [1,1,1,1,1]

                                                5

Test Case 2 	

                    [0,1,0,1,0,1]

	

                                                1

Test Case 3 	

                [1,0,0,1,1,0,1,1,1,0,0,1,1]

	

                                                3

Test Case 4 	

                    [1,0,1,1,1]

	

                                                3

Test Case 5 	

                    [1,0,1,1,0,1]

	

                                                2

Test Case 6 	

                        [0,0,0,0,0]

	

                                                0
'''


#
def findMaxConsecutiveOnes(nums):
    max_count = 0  
    current_count = 0  
    
    for signal in nums:
        if signal == 1:
            current_count += 1  
            max_count = max(max_count, current_count)  
        else:
            current_count = 0  # Reset current_count when we encounter a 0
    
    return max_count
import ast
nums = ast.literal_eval(input().strip())
print(findMaxConsecutiveOnes(nums))