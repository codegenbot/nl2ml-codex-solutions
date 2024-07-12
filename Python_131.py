```
def digits(n):
    total = 0
    while n:
        digit = n % 10
        total += digit
        n //= 10
    return total