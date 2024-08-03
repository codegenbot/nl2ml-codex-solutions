def digits(n):
    product = 1
    while n:
        remainder = n % 10
        if remainder % 2 != 0:
            product *= remainder
        n //= 10
    return product