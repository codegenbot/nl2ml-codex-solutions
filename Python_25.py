```
from typing import List
def factorize(n: int) -> List[int]:
    while True:
        try:
            n = int(input("Enter a number to be factored: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    i = 2
    factors = [n]
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            for _ in range(count):
                factors.append(i)
    return factors