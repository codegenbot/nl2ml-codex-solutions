def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
threshold = int(input("Enter threshold: "))

result = check_numbers_within_threshold(numbers, threshold)
print(result)