from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return "Please enter a number greater than 1."

    factors = []
    divisor = 2
    while n > 1 and n != 0:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

try:
    n = int(input("Enter a number: "))
    print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")