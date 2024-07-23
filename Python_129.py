```
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    res = []
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            return path[:]
        res = []
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, path + [grid[ni][nj]])
                visited[ni][nj] = False
    
    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            dfs(i, j, [])
            visited[i][j] = False
    
    return res[0] if res else None