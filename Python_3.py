from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    user_input = input("Enter a list of integers separated by space: ")
    operations = [int(i) for i in user_input.split()]
    result = below_zero(operations)
    print(result)