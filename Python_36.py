def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n+1) if ((i % 7 == 0 or '7' in str(i)) and not (i % 11 == 0))
    return count