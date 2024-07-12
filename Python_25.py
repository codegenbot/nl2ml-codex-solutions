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

n = int(input("Enter a number to factorize: "))
result = factorize(n)
for factor in result:
    print(factor)