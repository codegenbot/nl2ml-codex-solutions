def sort_third(l: list):
    sorted_list = sorted(
        l,
        key=lambda x: (
            x[2] if isinstance(x, list) and len(x) >= 3 else x,
            float("inf"),
        )[0],
    )
    groups = [sorted_list[i : i + 3] for i in range(0, len(sorted_list), 3)]
    return [elem for group in groups for elem in group]