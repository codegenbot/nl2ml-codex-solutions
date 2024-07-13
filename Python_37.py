def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(
            range(len(l)), sorted((l[i], l[i]) for i in range(1, len(l), 2))
        )
    ]