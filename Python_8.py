from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if numbers else 0
    product = 1
    for number in numbers:
        product *= number
    return (total_sum, product)