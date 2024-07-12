def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    while len(path) < k:
        x, y = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start][0]
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        next_val = min(grid[i][j] for i, j in neighbors if 0 <= i < n and 0 <= j < n)
        path.append(next_val)
        start = next_val
    return path