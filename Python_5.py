def complete_code(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result


# Input
numbers = input("Enter numbers separated by space: ")
delimiter = input("Enter delimiter: ")

# Output
print(complete_code(numbers.split(), delimiter))