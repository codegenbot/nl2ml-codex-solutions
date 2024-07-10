from typing import List
import math


def main():
    while True:
        try:
            n1 = int(input("Enter the first integer: "))
            if n1 < 1:
                print("Please enter a positive integer.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    common_factors = []
    while True:
        try:
            n2 = int(
                input(f"Enter another integer ({n1} and {n2} are already checked): ")
            )
            if n2 <= 0:
                break
            factors1 = []
            i = 2
            while i * i <= n1:
                if n1 % i:
                    i += 1
                else:
                    n1 //= i
                    count = 0
                    while n1 % i == 0:
                        n1 //= i
                        count += 1
                    factors1.extend([i] * count)
            if n1 > 1:
                factors1.append(n1)

            factors2 = []
            i = 2
            while i * i <= n2:
                if n2 % i:
                    i += 1
                else:
                    n2 //= i
                    count = 0
                    while n2 % i == 0:
                        n2 //= i
                        count += 1
                    factors2.extend([i] * count)
            if n2 > 1:
                factors2.append(n2)

            common_factors_set = set(factors1) & set(factors2)
            if common_factors_set:
                common_factors.extend(list(common_factors_set))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    if common_factors:
        print(f"{', '.join(map(str, common_factors))} are the common factors.")
    else:
        print(f"No common factor found.")


if __name__ == "__main__":
    main()