import sys

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
    num = 2
    while count < n:
        num += 1
        fib_num = fibonacci(num)
        if is_prime(fib_num):
            count += 1

    return fib_num

n = int(input("Enter the value of n: "))
result = prime_fib(n)
print(result)