def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    return -b / a

coefficients = list(map(int, input("Enter coefficients separated by space: ").split()))
result = find_zero(coefficients)
print(result)