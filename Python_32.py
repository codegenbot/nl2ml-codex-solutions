def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(xs[1:])
    if n % 2 == 0 and b != 0:
        return -a / b
    return None