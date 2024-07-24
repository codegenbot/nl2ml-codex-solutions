from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

print("Enter numbers separated by space:")
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)