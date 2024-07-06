Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(i) for i in xs)
    return -xs[1] / (2 * max_coeff)