from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

user_input = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(float, user_input.split()))

result = mean_absolute_deviation(numbers)
print(result)