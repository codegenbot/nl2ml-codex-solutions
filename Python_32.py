def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    a, b = xs[0], max(xs[1:])
    return -b / a


result = find_zero()
print(result)