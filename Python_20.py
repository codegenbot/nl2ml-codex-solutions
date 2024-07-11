```
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (float('nan'), float('inf'))
    
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(closest_pair[1] - closest_pair[0])

    for i in range(1, len(numbers) - 1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])

    return closest_pair