from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("Input list must contain only integers")
        total_sum += num
        product *= num

    return (total_sum, product)