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
        n = int(input("Enter a number to factorize: "))
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            result = factorize(n)
            print(result)
            break
    except ValueError:
        print("Please enter a valid integer.")