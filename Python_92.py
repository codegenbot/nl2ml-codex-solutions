def any_int(x, y, z):
    return (
        x == y + z or x == y - z or x == z - y or y == x + z or y == x - z or y == z - x
    ) and all(isinstance(i, int) for i in [x, y, z])