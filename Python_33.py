
def sort_third(l: list):
    return sorted([x for i, x in enumerate(l) if i % 3 == 0]) + [x for i, x in enumerate(l) if i % 3 != 0]