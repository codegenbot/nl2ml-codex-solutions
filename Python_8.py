from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), *map(lambda x: x if numbers else 1, [0, 1]))