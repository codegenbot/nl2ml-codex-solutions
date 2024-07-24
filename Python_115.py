```
import math
from math import gcd

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_per_cycle = min(capacity, gcd(*[sum(row) for row in grid]))
    return -(-total_water // water_per_cycle)