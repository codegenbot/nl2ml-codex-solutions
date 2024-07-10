from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:-1]:
        result.extend([delimeter, num])
    result.append(numbers[-1])
    return result