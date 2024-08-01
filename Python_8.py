from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if not numbers else 0 if 0 in numbers else eval("*".join(map(str, numbers))),
    )