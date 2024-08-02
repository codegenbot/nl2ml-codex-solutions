import math

def max_fill(grid, capacity):
    total_water = sum(row for row in grid)
    return math.ceil(total_water / capacity)