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

while True:
    try:
        n = int(input("Please enter a positive integer greater than 1: "))
        if n > 1:
            break
        else:
            print("Please enter a positive integer greater than 1.")
    except ValueError:
        print("Invalid input. Please enter a positive integer greater than 1.")

print(factorize(n))