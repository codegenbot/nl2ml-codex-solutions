def cycpattern_check(a: str, b: str) -> bool:
    if len(a) != len(b):
        return False
    return b in (a + a) and a in (b + b)