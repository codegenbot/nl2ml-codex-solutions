from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().split()))
    if not numbers:
        return 0, 1
    return sum(numbers), 0 if 0 in numbers else eval("*".join(map(str, numbers)))

sum_product()