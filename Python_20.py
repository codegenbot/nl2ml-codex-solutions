from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_diff = float('inf')
    closest_nums = (float('inf'), float('inf'))
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < closest_diff:
            closest_diff = diff
            closest_nums = (numbers[i], numbers[i+1])
    return closest_nums