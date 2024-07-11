def sort_third(l: list):
    return [
        (
            val if i % 3 != 0 else min(
                [x for x in l[: i // 3 * 3 + i % 3 :] + l[i // 3 * 3 + i % 3 :]]
            )
        )
        for i, val in enumerate(l)
    ]