from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input from the user
operations = list(map(int, input().split()))

# Call the function with the input list and print the result
print(below_zero(operations))