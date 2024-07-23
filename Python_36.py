def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            if i % 5 == 0:
                count += 1
            elif '3' in str(i):
                count += 1
        elif i % 5 == 0:
            count += 1
    return count

print(fizz_buzz(100))