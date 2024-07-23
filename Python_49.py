from mathlib import gcd

def modp(n: int, p: int):
    if gcd(n, p) == 1:
        return pow(n, p - 2, p) * n % p
    else:
        return None