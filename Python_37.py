def sort_even(l: list):
    return [i if i % 2 != 0 else j for j in sorted([x for x in l[1::2]])] + l[::2]