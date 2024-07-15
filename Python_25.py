def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors


try:
    n = int(input("Enter a positive integer: "))
    if n <= 0:
        raise ValueError("Please enter a positive integer.")

    result = factorize(n)
    print(result)
except ValueError as ve:
    print(ve)