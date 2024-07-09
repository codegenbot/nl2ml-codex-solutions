from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Get input from the user
numbers = list(map(float, input().split()))

# Call the function with the input numbers
result = mean_absolute_deviation(numbers)

print(result)