def factorize(n: int) -> list[int]:
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
    n = int(input("Enter a number to factorize: "))
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")