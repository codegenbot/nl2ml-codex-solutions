def sort_even(l: list):
    even_numbers = sorted([x for x in l if abs(x) % 2 == 0])
    odd_numbers = [x for x in l if abs(x) % 2 != 0]
    return tuple(even_numbers + odd_numbers)