```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = path
            return True
        
        visited[i][j] = True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, path + [grid[ni][nj]])
        visited[i][j] = False
        
    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    
    return res