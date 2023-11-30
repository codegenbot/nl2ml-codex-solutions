from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers

input_numbers = [1, 2, 3, 4, 5]  # Replace with your input numbers
result = rolling_max(input_numbers)
print(result)