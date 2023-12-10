[PYTHON]
def probability(n, m):
    p = 0.0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                p += 1.0 / (n * m)
    return float(format(p, '.6f'))
[/PYTHON]
[TESTS]
# Test case 1:
assert probability(4, 6) == 0.166667
# Test case 2:
assert probability(5, 8) == 0.2
# Test case 3:
assert probability(10, 20) == 0.05
[/TESTS]
