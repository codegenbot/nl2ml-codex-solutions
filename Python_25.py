from typing import List


def find_prime_factors(n: int) -> List[List[int]]:
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
            factors.append([i] * count)
    if n > 1:
        factors.append([[n]])
    return [factor_list for factor_list in set(map(tuple, factors))]