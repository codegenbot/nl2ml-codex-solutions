from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total = 1
    product = 1
    for num in numbers:
        total += num
        product *= num
    print(
        sum_product([1, 2, 3])
    )  # This will return the sum and product of numbers in the list.