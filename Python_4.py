```
def mean_absolute_deviation(numbers: List[float]) -> float:
    """Your docstring here"""
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)