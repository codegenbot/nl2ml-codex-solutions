from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    if n <= 1:
        return [n]
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

try:
    n = int(input("Enter a number to factorize: "))
    if n <= 0:
        raise ValueError
    result = factorize(n)
    for factor in result:
        print(factor)
except ValueError:
    print("Please enter a valid positive integer for factorization.")