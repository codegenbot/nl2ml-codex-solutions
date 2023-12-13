def digits(n):
    odd_digits_product = 1
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            odd_digits_product *= digit
        n //= 10
    if odd_digits_product == 1:
        return 0
    return odd_digits_product