def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers) - 2):
        max_values.append(max(numbers[i], numbers[i+1], numbers[i+2]))
    max_values.append(max(numbers[-2], numbers[-1]))
    return max_values