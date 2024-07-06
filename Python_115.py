def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    extra_water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += 1
                if water > capacity:
                    extra_water += water - capacity
                    water = capacity
    return (water + extra_water) // capacity