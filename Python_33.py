def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for x in l if (i - l.index(x)) % 3 != 0])
        for i, val in enumerate(l)
    ]