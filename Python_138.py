def is_equal_to_sum_even(n):
    even_sum = sum(i for i in range(2, n+1) if n % i == 0)
    return even_sum == n