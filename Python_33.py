```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([x for x in l[:i + 1] if i % 3 == 0])[0]
        for i, x in enumerate(reversed(l))
    ]