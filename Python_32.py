def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b


xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)