def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0:
            j = i
            while j > 1 and n % j == 0:
                j -= 1
            return i if j == 1 else largest_prime_factor(j)
        i -= 1