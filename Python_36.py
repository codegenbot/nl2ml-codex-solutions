def fizz_buzz(n: int):
    count = len([i for i in range(1, n + 1) if i % 11 == 0 and i % 13 != 0 and '7' in str(i)])
    return count