def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers)):
        if i == 0:
            max_values.append(max(numbers[i], numbers[i + 1]))
        elif i == len(numbers) - 1:
            max_values.append(max(numbers[i - 1], numbers[i]))
        else:
            max_values.append(max(numbers[i - 1], numbers[i], numbers[i + 1]))
    
    return max_values