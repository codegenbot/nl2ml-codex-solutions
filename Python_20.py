numbers.sort()
min_diff = numbers[1] - numbers[0]
closest_pair = (numbers[0], numbers[1])
for i in range(1, len(numbers) - 1):
    diff = numbers[i + 1] - numbers[i]
    if diff < min_diff:
        min_diff = diff
        closest_pair = (numbers[i], numbers[i + 1])
return closest_pair