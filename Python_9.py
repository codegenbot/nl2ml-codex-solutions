from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

numbers = [int(x) for x in input().split()]
output = rolling_max(numbers)
print(output)