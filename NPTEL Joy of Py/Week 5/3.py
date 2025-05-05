
def print_array(arr):
    print(" ".join(map(str, arr)))

def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        print_array(arr)
        if not swapped:
            break

# Read input directly as a list of integers
arr = list(map(int, input().split()))

# Perform bubble sort
bubble_sort(arr)
