from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) < 2:
        return []
    max_so_far = numbers[0]
    max_ending_here = numbers[0]
    result = [numbers[0]]
    for num in numbers[1:]:
        if num > max_ending_here:
            max_ending_here = num
        elif num > max_so_far:
            max_so_far = num
        result.append(max(max_ending_here, max_so_far))
    return result