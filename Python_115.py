import math

def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    if total_water == 0:
        return 0
    return math.ceil(total_water / capacity)