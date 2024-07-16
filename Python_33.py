def sort_third(l: list):
    while len(l) % 3 != 0:
        l.append(None)
    return [sorted(l[i : i + 3]) for i in range(0, len(l), 3)]

print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))