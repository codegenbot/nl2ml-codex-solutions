def special_factorial(n):
    if n <= 0:
        return 1
    result = 1
    for i in range(2, n+1):
        result *= math.factorial(i)
    return result