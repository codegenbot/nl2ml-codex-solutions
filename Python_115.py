Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_used = math.ceil(total_water / float(capacity))
    return buckets_used