def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and (a in (b + b)) and (b in (a + a))