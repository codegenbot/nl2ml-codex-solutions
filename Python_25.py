```
import math

def factorize(n: int) -> list:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i ** count)
    if n > 1:
        factors.append(n)
    return factors

n = int(input("Enter an integer: "))  
result = factorize(n)  
print(result)