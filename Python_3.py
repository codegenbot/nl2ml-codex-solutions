from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

user_input = input("Enter a list of integers separated by spaces: ")
operations = [int(num) for num in user_input.split()]
result = below_zero(operations)
print(result)