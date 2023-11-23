from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

numbers = list(map(float, input().strip().split()))

result = mean_absolute_deviation(numbers)
print(result)