from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum(numbers), 1 if len(numbers) == 0 else int(math.prod(numbers))