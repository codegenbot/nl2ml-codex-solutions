```
def sort_even(l: list):
    return [x if i % 2 != 0 else min(y for y in l if (i // 2) * 2 == l.index(y))
            for i, x in enumerate(l)]