def max_fill(grid, capacity):
    import math

    total_buckets = 0
    for row in grid:
        total_buckets += sum(row)
    
    return math.ceil(total_buckets / capacity)