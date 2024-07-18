from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from the user
numbers = [float(x) for x in input().split()]

# Calculate mean absolute deviation
result = mean_absolute_deviation(numbers)
print(result)