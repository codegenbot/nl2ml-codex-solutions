def sum_squares(lst):
    return round(sum([i**2 for i in [round(x)] for x in lst]))