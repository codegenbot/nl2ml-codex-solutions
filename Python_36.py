def fizz_buzz(n: int) -> int:
    count = 0
    for i in range(1, n+1):
        if (i % 11 == 0 or i % 13 == 0) and '7' in str(i) and (i % 77 != 0 or i == 77):
            count += 1
    return count