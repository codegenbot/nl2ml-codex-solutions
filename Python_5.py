def complete_code(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

# Call the function with input data
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = complete_code(numbers, delimiter)
print(output)