def modp(n: int, p: int):
    if pow(n, (p - 1) // 2, p) == p - 1:
        return pow(n, p - 2, p)
    else:
        return (n * modp(n, p)) % p