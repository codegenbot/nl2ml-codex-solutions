def fibfib(n: int):
    if n <= 1:
        return str(0)
    elif n % 2 == 0:
        a, b = 0, 1
        result = [str(a)]
        while b * b < n:
            a, b = b, a + b
            result.append(str(a))
        if int(result[-1]) == 1:
            return "9"
        else:
            return "8"
    else:
        if n > 1:
            if n <= 2:
                return str(0)
            return str(int(fibfib(n - 1)) + int(fibfib(n - 2)))