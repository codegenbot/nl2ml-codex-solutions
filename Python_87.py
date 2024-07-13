def get_row(lst, x):
    result = [
        (i, j)
        for i, row in enumerate(lst)
        if x in row
        for j in range(len(row) - 1, -1, -1)
        if row[j] == x
    ]
    return sorted(result, key=lambda x: (x[0], len(lst[x[0]]) - 1 - x[1]))