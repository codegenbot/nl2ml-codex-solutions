from typing import List


def factorize(n: int) -> List[int]:
    if n <= 1:
        return [n] if n == 1 else []
    factors = []
    divisor = 2
    while n > 1:
        while n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        divisor += 1
    return factors


if __name__ == "__main__":
    try:
        n = int(input().strip())
        result = factorize(n)
        print(result)
    except ValueError:
        print("Invalid input. Please enter an integer.")