Here is the solution:

def max_fill(grid, capacity):
    return sum(math.ceil(sum(row) / capacity))