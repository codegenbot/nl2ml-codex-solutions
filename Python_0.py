def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

# Call the function with appropriate arguments here
check_numbers([2, 5, 8, 10], 3)