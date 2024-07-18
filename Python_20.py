def find_min_difference(numbers):
    numbers.sort()
    min_diff = float("inf")
    result = (0, 0)
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result


input_numbers = list(map(int, input().split()))
output = find_min_difference(input_numbers)
print(output)