def string_xor(a: str, b: str) -> str:
    return "".join("1" if c != d else "0" for c, d in zip(a, b))