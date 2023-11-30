def find_closest_elements(numbers: list[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[1] - numbers[0])

    for i in range(1, len(numbers)-1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])

    return closest_pair