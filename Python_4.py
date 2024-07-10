from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

print("Enter numbers separated by spaces:")
numbers = [float(x) for x in input().split()]
result = mean_absolute_deviation(numbers)
print(result)