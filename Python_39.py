import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    a, b = 1, 1
    count = 2
    while count <= n:
        a, b = b, a + b
        if is_prime(b):
            count += 1
    return b

n = int(input("Enter the value of n: "))
print(prime_fib(n))