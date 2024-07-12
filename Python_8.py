import sys
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

numbers = list(map(int, sys.argv[1:]))
result = sum_product(numbers)
print(result)