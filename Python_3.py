from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


n = int(input())
operations = []
for i in range(n):
    operation = int(input())
    operations.append(operation)

result = below_zero(operations)
print(result)