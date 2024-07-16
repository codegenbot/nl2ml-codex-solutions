numbers = list(map(float, input().split()))

def find_closest_elements(numbers):
    numbers.sort()
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair

output = find_closest_elements(numbers)
print("{:.2f} {:.2f}".format(output[0], output[1]))