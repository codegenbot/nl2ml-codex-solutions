```
def find_prime_factors(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    for i in range(2, a+1):
        while a % i == 0:
            factors.append(i)
            a //= i
    prime_factors = [f for f in set(factors) if is_prime(f)]
    return prime_factors