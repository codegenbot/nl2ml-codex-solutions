from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            for _ in range(count):
                factors.append(i)
    return factors if n > 1 else [n]