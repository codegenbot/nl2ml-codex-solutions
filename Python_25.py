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

if __name__ == "__main__":
    while True:
        try:
            n = int(input("Enter a positive number to factorize: "))
            if n > 0:
                result = factorize(n)
                print(result)
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print("Please enter a valid positive integer.")