def sort_third(l: list):
    return [
        sorted([x for x in l if i % 3 != 0])[i // 3] if i % 3 == 0 else x
        for i, x in enumerate(sorted(l))
    ]