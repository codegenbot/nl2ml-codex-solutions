import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    return max(0, math.ceil(total_water / capacity) * len(grid) - total_water)