```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = [i for i in range(2, a+1) if a % i == 0]
    factors.sort()
    prime_factors = []
    for factor in factors:
        while a % factor == 0:
            prime_factors.append(factor)
            a //= factor
    return all(is_prime(x) for x in set(prime_factors)) and len(set(prime_factors)) >= 3