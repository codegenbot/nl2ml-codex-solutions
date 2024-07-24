from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result += [num] + [delimeter]
    return result