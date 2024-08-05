def complete_code(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

numbers = [1, 2, 3]
delimeter = "/"
output = complete_code(numbers, delimeter)
print(output)