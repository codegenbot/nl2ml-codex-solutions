from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(delimeter)
        result.append(numbers[i])
    return result if numbers else [delimeter]