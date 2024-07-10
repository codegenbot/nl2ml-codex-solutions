```python
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 1:
        return numbers
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter] + [result[-1]] + [numbers[i]])
    return result