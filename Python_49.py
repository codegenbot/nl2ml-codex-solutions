def modp(n: int, p: int):
    return ((n ** (p - 2)) % p) * n % p if n != 0 else 1