```
from typing import List, Tuple
import math

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return ()

    numbers.sort()

    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[0] - numbers[1])

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair