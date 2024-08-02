def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    i, j = 0, 0

    while len(path) < k:
        current = path[-1]
        next_cell = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                if next_cell is None or grid[ni][nj] < grid[next_cell[0]][next_cell[1]]:
                    next_cell = (ni, nj)
        if next_cell is not None:
            path.append(grid[next_cell[0]][next_cell[1]])
            visited.add(next_cell)
            i, j = next_cell

    return path


n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]
k = int(input())

result = minPath(grid, k)
print(result)