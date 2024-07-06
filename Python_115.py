
def max_fill(grid, capacity):
    import math

    rows = len(grid)
    cols = len(grid[0])
    water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += 1
    return int(math.ceil(water / capacity))

assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9, 2) == 2, "Error"