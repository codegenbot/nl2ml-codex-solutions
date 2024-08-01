def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else (
                min([x for x in l if i % 3 == 0])
                if i < len(l) // 2
                else max([x for x in l if i % 3 == 0])
            )
        )
        for i, val in enumerate(l)
    ]