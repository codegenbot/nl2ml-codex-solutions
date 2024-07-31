from typing import List, Tuple

def find_closest_elements(numbers: list[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair