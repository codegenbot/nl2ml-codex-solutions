
def is_equal_to_sum_even(n):
    return n % 2 == 0 and sum([i for i in range(1, int(n / 2) + 1) if i % 2 == 0]) == n