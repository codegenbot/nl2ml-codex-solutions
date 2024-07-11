def factorize(n: int) -> List[int]:
    if not isinstance(n, int):
        return ["Invalid input. Please enter an integer."]
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
            factors.append(i ** count)
    if n > 1:
        factors.append(n)
    return [int(factor) for factor in set(map(str, factors))]