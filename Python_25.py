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
        num = int(input("Enter a number to factorize: "))
        result = factorize(num)
        print(result)
        break
    except ValueError:
        print("Please enter a valid integer.")