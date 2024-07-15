def sort_third(l: list):
    return [
        (
            sorted(l[i : i + 3], key=lambda x: x % 10)
            if i + 3 <= len(l)
            else sorted(l[i:], key=lambda x: x % 10)
        )
        for i in range(0, len(l), 3)
    ]