def is_simple_power(x, n):
    return x > 0 and n > 0 and x == n ** (int(round(x ** (1 / n))))

print(is_simple_power(1, 12))