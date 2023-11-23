from typing import List


def factorize() -> List[int]:
    n = int(input())
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors


result = factorize()
print(result)