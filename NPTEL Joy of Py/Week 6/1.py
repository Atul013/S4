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

