def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else min(y for y in l if (i - l.index(y)) % 3 == 2)
        )
        for i, x in enumerate(l)
    ]