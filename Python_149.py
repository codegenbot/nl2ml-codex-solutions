def sorted_list_sum(lst):
    return sum(sorted(lst, key=str.casefold))