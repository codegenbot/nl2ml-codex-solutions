def modp(n: int, p: int):
    if p > 1:
        return pow(n, p - 2, p) * n % p
    else:
        return None