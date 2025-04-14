input_string = input()
numbers = list(map(int, input_string.split()))
if len(numbers) < 2:
    print("Not enough numbers")
else:
    unique_numbers = sorted(set(numbers))
    if len(unique_numbers) < 2:
        print("No second smallest number")
    else:
        second_smallest = unique_numbers[1]
        print(second_smallest)