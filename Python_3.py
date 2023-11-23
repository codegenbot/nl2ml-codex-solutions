from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


input_str = input()
operations = list(map(int, input_str.split()))

result = below_zero(operations)
print(result)