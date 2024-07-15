def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

print("Enter numbers separated by space:")
numbers = list(map(int, input().split()))
result = normalize_numbers(numbers)
print(result)