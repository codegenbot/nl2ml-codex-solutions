from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), *([1] + numbers)) if numbers else ({}, 1)