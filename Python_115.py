def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    return math.ceil(total_water / (capacity + len(grid) * len(grid[0]) - total_water))