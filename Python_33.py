def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else (
                sorted([y for y in l if y == x and i % 3 != 0])[0]
                if [y for y in l if y == x and i % 3 != 0]
                else [x]
            )
        )
        for i, x in enumerate(l)
    ]