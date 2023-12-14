from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = list(map(int, input("Enter the operations: ").split()))
n = len(operations)

print(below_zero(operations))