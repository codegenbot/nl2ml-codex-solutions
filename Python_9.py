from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_list = [int(x) for x in input().split()]
output = rolling_max(input_list)
print(output)