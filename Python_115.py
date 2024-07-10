def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    needed_lowerings = math.ceil(total_water / float(capacity))
    return int(needed_lowerings)