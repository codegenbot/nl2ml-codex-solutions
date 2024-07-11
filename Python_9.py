from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list


# Read input from user
try:
    numbers = list(map(int, input().split()))
except ValueError:
    print("Input should be integers separated by spaces")

# Call the function and print the output
print(rolling_max(numbers))