import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read input from user
xs = list(map(float, input().split()))

# Call the necessary functions and print the output
print(poly(xs[:-1], xs[-1]))
print(find_zero(xs))