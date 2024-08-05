from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
numbers = list(map(float, input("Enter the list of numbers separated by spaces: ").split())

# Calculate and print the mean absolute deviation
result = mean_absolute_deviation(numbers)
print(f"Mean Absolute Deviation: {result}")