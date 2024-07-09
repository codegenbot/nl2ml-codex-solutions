def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fibonacci(num):
        if num <= 1:
            return num
        else:
            return fibonacci(num - 1) + fibonacci(num - 2)

    count = 0
    i = 0
    while count < n:
        if is_prime(fibonacci(i)):
            count += 1
        i += 1
    return fibonacci(i - 1)

n = int(input('Enter a number: '))
print(prime_fib(n))