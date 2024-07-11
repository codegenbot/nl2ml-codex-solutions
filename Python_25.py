from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i ** count)
    return factors