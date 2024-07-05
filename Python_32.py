import math

def find_zero(xs: list):
    def f(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    def derivative(xs):
        return [i * coeff for i, coeff in enumerate(xs)][1:]

    def df(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(derivative(xs))])

    x = 0
    for _ in range(100):
        fx = f(x)
        if abs(fx) < 1e-7:
            return x
        dfx = df(x)
        if dfx == 0:
            break
        x -= fx / dfx
    return x

if __name__ == "__main__":
    xs = list(map(float, input("Enter coefficients separated by spaces: ").split()))
    root = find_zero(xs)
    print(f"The root of the polynomial is: {root}")