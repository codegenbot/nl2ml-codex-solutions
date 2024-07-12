from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Explicitly provide input here
numbers = list(map(int, input("Enter space-separated numbers: ").split()))
print(rolling_max(numbers))