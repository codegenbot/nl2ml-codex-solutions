def is_equal_to_sum_even(n):
    if n % 2 == 1:
        return False
    return n % 2 == 0 and len(set([i for i in range(1, int(n**0.5) + 1) if n % i == 0])) == 4