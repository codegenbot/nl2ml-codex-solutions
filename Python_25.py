from typing import List
def factorize(n: int) -> List[int]:
    if not isinstance(n, int):
        return "Error: Input must be an integer."
    i = 2
    factors = []
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