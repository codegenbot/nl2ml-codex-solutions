def is_simple_power(x, n):
    return x > 0 and (x == 1 or (n > 1 and x == n**int(x**0.5)))