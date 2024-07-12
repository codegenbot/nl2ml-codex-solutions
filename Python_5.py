```
from typing import List

def find_max_min_average(numbers: List[int]) -> str:
    if not isinstance(numbers, list):
        return "Error: Input is not a list."
    if not all(isinstance(i, int) for i in numbers):
        return "Error: All elements must be integers."

    max_num = max(numbers)
    min_num = min(numbers)
    average = sum(numbers) / len(numbers)

    return f"Max: {max_num}, Min: {min_num}, Average: {average}"