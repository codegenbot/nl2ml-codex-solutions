from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i for _ in range(count))
    if n > 1:
        factors.append(n)
    return [factor for factor in set(factors) for _ in range(factors.count(factor))]