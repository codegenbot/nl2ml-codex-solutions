def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and (b in (a + a) or a in (b + b)) or a == b