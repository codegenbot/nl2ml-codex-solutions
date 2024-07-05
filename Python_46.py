def fib4(n):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        for _ in range(n-1):
            a, b = b, a+b
        return b