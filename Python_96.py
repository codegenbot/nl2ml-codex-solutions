def count_up_to(n):
    primes = [2]
    for i in range(3, n + 1, 2):
        if all(i % p != 0 for p in primes):
            primes.append(i)
    return primes