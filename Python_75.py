def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    prime_factors = []
    for i in range(2, a+1):
        while a % i == 0:
            prime_factors.append(i)
            a //= i
    return all(is_prime(f) for f in set(prime_factors)) and len(set(prime_factors)) >= 3