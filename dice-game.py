n = int(input())
m = int(input())
if n >= m:
    print(round((n - 1) / n, 2))
else:
    print(round(m / (2 * m), 2))