def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    operations = list(map(int, input().split()))
    result = below_zero(operations)
    print(result)