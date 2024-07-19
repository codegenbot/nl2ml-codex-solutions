def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0, 1)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair