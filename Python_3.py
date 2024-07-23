```
from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False


if __name__ == "__main__":
    operations = list(map(int, input("Enter a list of integers separated by space: ").split()))
    print(below_zero(operations))