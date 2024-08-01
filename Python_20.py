def find_closest_pair(numbers):
    numbers.sort()
    min_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
    closest_pair = [
        (numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
        if numbers[i + 1] - numbers[i] == min_diff
    ][0]
    return closest_pair

input_numbers = [int(x) for x in input().split()]
result = find_closest_pair(input_numbers)
print(result)