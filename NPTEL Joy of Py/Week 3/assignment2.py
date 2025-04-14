input_string = input()
numbers = list(map(int, input_string.split()))
unique_numbers = []
seen_even = set()

for number in numbers:
    if number % 2 == 0:
        if number not in seen_even:
            seen_even.add(number)
            unique_numbers.append(number)
    else:
        unique_numbers.append(number)
print(" ".join(map(str, unique_numbers)))