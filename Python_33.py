def sort_third(l):
    return [x if i % 3 != 0 else sorted([y for j, y in enumerate(l) if (j - i) % 3 != 0 and j % 3 != 0]) for i, x in enumerate(l)]