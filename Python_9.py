def rolling_max(numbers: List[int]) -> List[int]:
    maxes = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return maxes