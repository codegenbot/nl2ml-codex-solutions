def find_max_positive(lst):
    max_num = -1
    for num in lst:
        if num > 0 and num > max_num:
            max_num = num
    return max_num if max_num != -1 else None