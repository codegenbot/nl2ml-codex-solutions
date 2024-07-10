Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_abs_coeff = max(abs(x) for x in xs)
    if max_abs_coeff == abs(xs[0]):
        return -xs[0] / xs[1]
    else:
        return -xs[-1] / xs[-2]