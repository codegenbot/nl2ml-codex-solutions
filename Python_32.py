def read_input():
    n = int(input().strip())
    coeffs = list(map(float, input().strip().split()))
    x = float(input().strip())
    return coeffs, x


def find_zero(coeffs, x):
    eps = 1e-9
    max_iter = 1000

    guess = x

    for _ in range(max_iter):
        f = 0.0

        for i in range(len(coeffs) - 1, 0, -1):
            f = f * guess + coeffs[i]

        f_prime = 0.0
        for i in range(len(coeffs) - 1, 0, -1):
            f_prime = f_prime * guess + i * coeffs[i]

        delta = f / f_prime
        guess -= delta

        if abs(delta) < eps:
            return guess

    return None


x, coeffs = read_input()
result = find_zero(coeffs, x)
print(result)