from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if isinstance(numbers, list) and all(isinstance(x, int) for x in numbers) else 0
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product