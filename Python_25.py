```
def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while n > 1:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    return [i for i in set(factors)]