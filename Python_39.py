```
def prime_fib(n: int):
    a = b = 1
    count = 0
    while True:
        a, b = b, a + b
        if is_prime(b) and count == n - 1:
            return b
        count += 1

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True