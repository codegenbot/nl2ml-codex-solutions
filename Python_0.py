def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

has_close_elements = check_threshold([1, 2, 3, 4, 5], 2)
print(has_close_elements)