from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

try:
    n = int(input("Please enter an integer value: ").strip())
    if n <= 1:
        print("Invalid input. Please enter an integer greater than 1.")
    else:
        print(factorize(n))
except ValueError:
    print("Invalid input. Please enter an integer value.")