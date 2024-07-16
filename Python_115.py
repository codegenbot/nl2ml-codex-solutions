import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for row in grid for cell in row)
    return math.ceil(total_water / capacity) if total_water > 0 else math.ceil(sum(cell for row in grid) / capacity)