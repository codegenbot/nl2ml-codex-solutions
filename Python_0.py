def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with correct arguments
numbers = [5, 7, 3, 10, 15]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)