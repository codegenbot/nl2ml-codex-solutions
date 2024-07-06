def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    num_buckets = math.ceil(total_water / float(capacity))
    return num_buckets