numbers, threshold = map(int, input("Enter numbers separated by space and threshold value: ").split())

def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

result = check_threshold(numbers, threshold)
print(result)