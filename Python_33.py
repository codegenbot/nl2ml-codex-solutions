def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l if y % 3 == 0])[i % 3 - 1]
        for i, x in enumerate(l)
    ]