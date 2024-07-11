from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

numbers_str = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, numbers_str.split()))
result = rolling_max(numbers)
print(result)