from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    unique_numbers = [numbers[0]]
    for num in numbers[1:]:
        if num != unique_numbers[-1]:
            unique_numbers.append(num)
    return unique_numbers