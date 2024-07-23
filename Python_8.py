```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total_sum = 1
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    numbers = [1, 2, 3]
    result = sum_product(numbers)
    print(result)  # prints: (6, 6)

    numbers = [4, 5, 6]
    result = sum_product(numbers)
    print(result)  # prints: (15, 120)