def find_min_difference(numbers):
    numbers.sort()
    min_diff = float("inf")
    result = ()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result


numbers = list(map(int, input().split()))
print(find_min_difference(numbers))