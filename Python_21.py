def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

input_numbers = [1, 2, 3, 4, 5]
result = normalize_numbers(input_numbers)
print(result)