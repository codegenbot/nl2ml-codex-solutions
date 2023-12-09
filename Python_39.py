def prime_fib(n):
    fib = [0, 1]
    for i in range(2, n+1):
        if len(fib) < i-1 or fib[-1] != n:
            fib.append(fib[i-1] + fib[i-2])
        else:
            return None
    return fib[-1]