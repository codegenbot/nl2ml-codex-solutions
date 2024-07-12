def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [4, 6, 2, 9, 10]
threshold = 3
result = check_numbers(numbers, threshold)
print(result)