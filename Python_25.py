from typing import List
import math


def factorize(n: int) -> List[int]:
    if not isinstance(n, int):
        return [Error: Input must be an integer.]
    if n < 1:
        return [Error: Input must be a positive integer.]

    factors = []
    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    if n > 1:
        factors.append(n)
    return factors