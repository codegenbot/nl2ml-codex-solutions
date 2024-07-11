from typing import List
import math


def main():
    def factorize() -> List[int]:
        n = int(input("Enter a number: "))
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
                factors.append(i**count)
                i = 2
        if n > 1:
            factors.append(n)
        return factors

    print(factorize())


if __name__ == "__main__":
    main()