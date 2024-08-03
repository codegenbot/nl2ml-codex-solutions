def intersperse(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = intersperse(numbers, delimiter)
print(output)