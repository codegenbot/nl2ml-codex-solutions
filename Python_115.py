def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))
    return int(math.ceil(total_water / float(capacity)))