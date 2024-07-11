```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    result.append(numbers[0])
    for num in numbers[1:]:
        result.extend([num, delimeter])
    return result