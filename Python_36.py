def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if '11' in str(i) or '13' in str(i) or '7' in str(i):
            count += 1
    return count