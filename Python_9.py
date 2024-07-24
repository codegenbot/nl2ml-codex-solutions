from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

def main():
    numbers = list(map(int, input().split()))
    result = rolling_max(numbers)
    print(result)

if __name__ == "__main__":
    main()