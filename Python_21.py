from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise TypeError("Expected a list of floats")

    for num in numbers:
        if not isinstance(num, (int, float)):
            raise TypeError("Expected a list of floats")

    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val - min_val == 0:
        return [0 for _ in numbers]

    return [(x - min_val) / (max_val - min_val) for x in numbers]