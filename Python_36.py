def fizz_buzz(n: int):
    return len([i for i in range(n) if (i % 11 == 0 or i % 13 == 0) and "7" in str(i)])