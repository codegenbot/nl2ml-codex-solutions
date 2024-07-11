from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        num = int(num)
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

input_list = list(map(int, input().split()))
result = rolling_max(input_list)
print(result)