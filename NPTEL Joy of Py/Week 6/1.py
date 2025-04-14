def find_kth_smallest(arr, k):
    if k > len(arr) or k <= 0:
        return "The clue k should be smaller than or equal to the list size"
    
    sorted_arr = sorted(arr)
    return sorted_arr[k - 1]

# Reading input from stdin
input_str = input().strip()
arr = list(map(int, input_str.split()))
k = int(input().strip())

# Call the function with the input array and k
result = find_kth_smallest(arr, k)
print(result)

'''
You are part of an elite team of treasure hunters, and your latest mission is to find the hidden treasure in a mysterious ancient temple. Inside the temple, you discover a series of enchanted scrolls containing arrays of magical numbers. The numbers are encrypted in different arrays, and each scroll has a clue indicating which element in the array holds the key to the treasure.

You are given one of these arrays, and the clue on the scroll tells you that the treasure is hidden inside the kth smallest number in that array. Your task is to figure out the kth smallest number from the array, where k is smaller than the size of the array, and return it as your answer.

The treasure hunters in your team trust you with this task, and the sooner you find the key, the sooner they can open the vault. So, be efficient and find the answer quickly!

Example:

Imagine the scroll has the following magical array: 12 3 5 7 19 17 4

And the clue tells you that k = 4.

 Your mission is to find the 4th smallest number in the array. Upon scanning the array, you discover that the 4th smallest number is 7.

 Input:

A list of n integers

An integer k (where k <= n).

Output:

Return the kth smallest element from the array.

If k > n, then generate an error message, ‘The clue k should be smaller than or equal to the list size’
'''