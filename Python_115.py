def max_fill(grid, capacity):
    water = 0
    for row in grid:
        for cell in row:
            if cell == 1:
                water += 1
    return math.floor(water / capacity) if capacity >= water else -1