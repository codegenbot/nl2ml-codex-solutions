Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    return -xs[1] / (2 * xs[0])