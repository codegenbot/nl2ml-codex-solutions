def special_factorial(n):
    if n == 1:
        return 1
    else:
        result = 1
        for i in range(n, 0, -1):
            result *= special_factorial(i - 1)
        return result