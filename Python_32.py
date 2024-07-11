```
def find_zero(xs):
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    leading_zero = 0
    for x in xs[1:]:
        if x != 0:
            return "Error: xs must be [0, *coefficients*]"
        leading_zero += x
    max_coeff = max(abs(x) for x in xs[1:])
    return -xs[-1] / (2 * leading_zero) if abs(leading_zero) == max_coeff else None