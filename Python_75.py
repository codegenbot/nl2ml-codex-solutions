```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    for i in range(2, a // 2 + 1):
        while a % i == 0:
            if is_prime(i):
                factors.append(i)
            a //= i
    if len(factors) != 3:
        return False
    return all(is_prime(f) for f in factors)