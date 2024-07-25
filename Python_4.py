```
from typing import List
import statistics

def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 2:
        return 0
    average = statistics.mean(numbers)
    total = sum(abs(num - average) for num in numbers)
    return total / len(numbers)

while True:
    try:
        numbers = [float(i) for i in input("Enter numbers separated by space: ").split()]
        break
    except ValueError:
        print("Invalid input. Please enter valid numbers.")
print(mean_absolute_deviation(numbers))