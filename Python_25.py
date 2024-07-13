def factorize(n: int) -> List[int]:
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
            factors.append([i] * count)
            i += 1
    if n > 1:
        factors.append([n])
    return factors[0] if len(factors) == 1 else [factor for factor in factors]