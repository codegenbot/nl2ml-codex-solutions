from typing import List

def mean_absolute_deviation(numbers: float) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)