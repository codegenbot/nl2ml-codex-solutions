def closest_integer(value):
    num = float(value)
    if num > 0:
        return int(num + 0.5) if num % 1 >= 0.5 else int(num)
    elif num < 0:
        return int(num - 0.5) if abs(num) % 1 >= 0.5 else int(num)