def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for y in l if y % 2 == 0])[j // 2]
        for i, x in enumerate(l)
    ]