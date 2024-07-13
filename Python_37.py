def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(
            range(len(l)), sorted((l[i], l[j]) for j in range(0, len(l), 2))
        )
    ]