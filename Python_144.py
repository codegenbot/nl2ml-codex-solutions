```python
import math

def simplify():
    numerator1 = int(input("Enter first fraction numerator: "))
    denominator1 = int(input(f"Enter first fraction denominator: "))

    numerator2 = int(input(f"Enter second fraction numerator: "))
    denominator2 = int(input(f"Enter second fraction numerator: "))

    new_numerator = numerator1*denominator2
    new_denominator = denominator1 * denominator2

    greatest_common_divisor = math.gcd(new_numerator, new_denominator)

    simplified_numerator = new_numerator // greatest_common_divisor
    simplified_denominator = new_denominator // greatest_common_divisor

    return f"{simplified_numerator}/{simplified_denominator}"

print(simplify())