```
from typing import List
import math


def factorize(n: int) -> List[int]:
    if n <= 1:
        return [n]
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.extend([i] * count)
            i = 2
    if n > 1:
        factors.append(n)
    return [int(f) for f in set(map(str, factors))]