def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for y in l if (i // 2) * 2 < l.index(y)] or [l[j] for j in range(len(l)) if (j + 1) % 2 == 0])[i // 2]
        for i, x in enumerate(l)
    ]