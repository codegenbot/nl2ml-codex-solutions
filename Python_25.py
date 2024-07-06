```
from typing import List


def factorize(n: int) -> List[int]:
    if n < 2:
        return [n]
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            for _ in range(count):
                factors.append(i)
    if n > 1:
        factors.append(n)
    return factors