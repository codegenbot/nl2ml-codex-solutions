def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        return "Input list should have at least 2 elements"
    a = xs[-1]
    b = xs[-2]
    return -b / a

xs = list(map(int, input().split()))
while len(xs) < 2:
    print("Input list should have at least 2 elements")
    xs = list(map(int, input().split()))

result = find_zero(xs)
print(result)