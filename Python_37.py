def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else sorted([y for y in l if (i // 2) * 2 <= j < ((i + 1) // 2) * 2])[j % 2]
        )
        for i, x in enumerate(l)
    ]