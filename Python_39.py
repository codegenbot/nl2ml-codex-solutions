def prime_fib(n: int):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    num = 1
    count = 0
    while count < n:
        num += 1
        if is_prime(num):
            if fibonacci(num) == num:
                count += 1
    return num

prime_fib(5)