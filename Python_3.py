from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input
operations = list(map(int, input().split()))

# Call the function below_zero
result = below_zero(operations)

# Output the result
print(result)