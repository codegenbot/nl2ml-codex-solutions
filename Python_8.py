from typing import List, Tuple

numbers = list(map(int, input().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        return sum(numbers), 1 if 0 in numbers else eval("*".join(map(str, numbers)))