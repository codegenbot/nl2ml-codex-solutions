n = int(input())
numbers = list(map(int, input().split()))

from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

if __name__ == "__main__":
    result = rolling_max(numbers)
    print(*result)