input_string = input()
numbers = list(map(int, input_string.split()))
reversed_numbers = numbers[::-1]
result = []
for i in range(len(numbers)):
    if i % 2 == 0:
        result.append(numbers[i] + reversed_numbers[i])
    else:
        result.append(numbers[i])
print(" ".join(map(str, result)))