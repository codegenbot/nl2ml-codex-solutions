import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[n // 2]
    b = sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs[: n // 2])])
    return -b / (2 * a)