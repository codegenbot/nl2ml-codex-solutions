def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in l if (j - l.index(x)) % 3 == 2])[::-1][0]
        )
        for i, val in enumerate(l)
        for j in range(len(l))
    ]