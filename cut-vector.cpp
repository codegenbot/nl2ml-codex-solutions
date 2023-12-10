[PYTHON]
def cut_vector(v):
    n = len(v)
    left = []
    right = []
    for i in range(n):
        if v[i] % 2 == 0:
            left.append(v[i])
        else:
            right.append(v[i])
    return [left, right]
[/PYTHON]
[TESTS]
# Test case 1:
v = [1, 2, 3, 4, 5]
assert cut_vector(v) == [[1, 3, 5], [2, 4]]
# Test case 2:
v = [1, 2, 3, 4, 5, 6]
assert cut_vector(v) == [[1, 3, 5], [2, 4, 6]]
# Test case 3:
v = [1, 2, 3, 4, 5, 6, 7]
assert cut_vector(v) == [[1, 3, 5, 7], [2, 4, 6]]
[/TESTS]
