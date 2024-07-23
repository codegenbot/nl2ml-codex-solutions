```python
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0  
    avg = sum(numbers) / len(numbers)
    return sum(abs(num - avg) for num in numbers) / len(numbers)