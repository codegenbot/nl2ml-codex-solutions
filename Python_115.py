
def max_fill(grid, capacity):
    import math
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += 1
    if capacity < water:
        return -1
    else:
        return math.floor(water / capacity)