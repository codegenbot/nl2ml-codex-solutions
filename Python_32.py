Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    for i in range(2, n, 2):
        a -= xs[i] / (b ** ((i + 1) // 2))
        b *= -1
    return round(-b / a, 2)