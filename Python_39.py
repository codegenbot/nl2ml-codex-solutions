n = int(input())


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n: int):
    def fib(n):
        if n <= 1:
            return n
        else:
            return fib(n - 1) + fib(n - 2)

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num):
            if num == fib(count):
                count += 1
    return num