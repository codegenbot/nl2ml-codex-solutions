```
def is_equal_to_sum_even(n):
    for a in range(2, n+1, 2):
        for b in range(2, n-a+1, 2):
            for c in range(2, n-a-b+1, 2):
                for d in range(2, n-a-b-c+1, 2):
                    if a + b + c + d == n:
                        return True
    return False