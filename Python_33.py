def sort_third(l: list):
    remainder = (3 - len(l) % 3) % 3
    l += [(float("inf"), float("inf"), float("inf"))] * remainder
    return [
        sorted(
            l[i : i + 3],
            key=lambda x: x[2]
        )
        for i in range(0, len(l), 3)
    ]