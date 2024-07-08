```Python
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) == 0:
        return []
    elif len(numbers) == 1:
        return numbers
    result = [numbers[0]]
    max_so_far = numbers[0]
    for num in numbers[1:]:
        max_so_far = max(num, max_so_far + num)
        result.append(max_so_far)
    return result