def find_even_odd_sum(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)