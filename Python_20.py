def find_min_diff_pair(numbers):
    numbers.sort()
    min_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
    result = [
        (numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
        if numbers[i + 1] - numbers[i] == min_diff
    ]
    return result[0]

numbers = list(map(int, input().split()))
print(find_min_diff_pair(numbers))