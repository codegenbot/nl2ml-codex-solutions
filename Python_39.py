import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    count = 0
    a, b = 0, 1
    while count < n:
        if is_prime(a):
            count += 1
        if count == n:
            return a
        a, b = b, a + b

n_str = input("Enter a number: ")
n = int(n_str) if n_str.isdigit() else 0
try:
    if n <= 0:
        raise ValueError("Please enter a positive integer.")
    print(prime_fib(n))
except ValueError as e:
    print(f"Error: {e}")