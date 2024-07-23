def modp(n: int, p: int):
    return pow(n, (p-1)//2, p) * n % p if n else 1