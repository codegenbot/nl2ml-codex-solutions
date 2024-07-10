def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Read input from user
numbers = list(map(float, input().split()))

# Call the function with input numbers and print the result
print(normalize_numbers(numbers))