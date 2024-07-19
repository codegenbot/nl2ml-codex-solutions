from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    total = 0
    product = 1
    for num in numbers:
        total += num
        product *= num
    return total, product