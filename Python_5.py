from typing import List

def intersperse(numbers: List[int], delimiter: str) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(str(numbers[i]))
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result