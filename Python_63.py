```
def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b, c = 0, 1, 1
        for _ in range(2, n + 1):
            a, b, c = b, c, a + b
        return c