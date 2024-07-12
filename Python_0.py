def check_numbers_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with appropriate arguments
numbers = [1, 3, 5, 7, 9]
threshold = 2
result = check_numbers_threshold(numbers, threshold)
print(result)