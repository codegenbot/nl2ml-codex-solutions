def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l if y == x and i % 3 != 0])[0]
        for i, x in enumerate([x for x in l if i % 3 != 0])
    ]