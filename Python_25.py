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
        n = int(input("Please enter a positive integer: "))
        if n > 0:
            break
        print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

print(factorize(n))