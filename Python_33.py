```
def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in l[:i // 3 * 3 + i % 3 :] if x % 3 != 0])[-1]
            if i // 3 * 3 + i % 3 <= len(l)
            else None
        )
        for i, val in enumerate(l)
    ]