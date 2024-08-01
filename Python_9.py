from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers


# Read input and call the function
numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)