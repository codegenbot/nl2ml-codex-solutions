```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    queue = [(0, 0, [grid[0][0]])
    res = []
    
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k+1:
            res = sorted(path)
            break
        for dx, dy in [[-1, 0], [1, 0], [0, -1], [0, 1]]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, path+[grid[nx][ny]]))
    return res