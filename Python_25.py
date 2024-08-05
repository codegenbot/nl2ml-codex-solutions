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
        n = int(input("Enter a valid integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

print(factorize(n))