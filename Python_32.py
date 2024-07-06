Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = (-1 * xs[1]) / (2 * xs[0])
    return round(x, 2)