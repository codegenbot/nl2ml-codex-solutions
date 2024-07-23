```
def fib4(n: int):
    if n < 0:
        return "Input should be a non-negative integer."
    elif n <= 3:
        return [0, 0, 2, 2][n]
    else:
        a, b, c, d = 0, 0, 2, 2
        for _ in range(4, n+1):
            a, b, c, d = b, c, d, a+b+c+d
        return d