def sum_squares(lst):
    return sum((int(x) + (1 if x - int(x) > 0 else 0))**2 for x in lst)