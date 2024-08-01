def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    total_water = sum(sum(row) for row in grid)
    bucket_cycles = math.ceil(total_water / capacity)

    return bucket_cycles