def add(x: int, y: int):
    if isinstance(x, int) and isinstance(y, int):
        return x + y
    else:
        raise ValueError("Expected integer inputs.")