from typing import List
import sys

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers

numbers = list(map(int, sys.argv[1:]))

result = rolling_max(numbers)
print(result)