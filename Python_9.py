from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result


if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    print(rolling_max(numbers))