def double_the_difference(lst):
    if not lst:
        return "Error: List is empty"
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return odd_sum * 2