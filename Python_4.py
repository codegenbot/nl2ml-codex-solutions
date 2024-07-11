from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read a list of floats from the user
numbers = list(map(float, input().split()))

# Calculate and print the mean absolute deviation
print(mean_absolute_deviation(numbers))