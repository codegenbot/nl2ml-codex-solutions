```
def modp(n: int, p: int):
    return pow(n, (p-2)%p, p) * n % p