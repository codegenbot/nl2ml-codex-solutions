from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    numbers.sort()
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result