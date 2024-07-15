def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    a, b = 1, 1
    count = 0
    while count < n:
        c = a + b
        a, b = b, c
        if is_prime(c):
            count += 1
    return c