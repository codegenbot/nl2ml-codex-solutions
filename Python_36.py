def fizz_buzz(n: int):
    count = 0
    for i in range(11, n):
        if str(i).count("7") > 0:
            count += 1
    return count