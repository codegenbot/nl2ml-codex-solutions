def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    
    fib = [2, 3]
    i = 2
    while len(fib) < n:
        next_num = fib[i-1] + fib[i-2]
        if is_prime(next_num):
            fib.append(next_num)
        i += 1
    
    return fib[-1]