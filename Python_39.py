def prime_fib(n: int):
    a, b = 0, 1
    count = 1
    while True:
        if is_prime(b):
            if count == n:
                print(b)
                return 
            count += 1
        a, b = b, a + b