xs = [float(x) for x in input().strip().split()]


def find_zero(a: float, b: float) -> float:
    if a == 0:
        return "undefined"
    return -b / a


result = find_zero(*xs)
print(result)