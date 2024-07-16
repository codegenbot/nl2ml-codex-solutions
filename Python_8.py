from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if all(isinstance(num, int) for num in numbers) else 0
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product