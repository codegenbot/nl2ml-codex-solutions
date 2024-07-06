def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = min(res, path) if not res else res
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, path + [grid[ni][nj]])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]])
                visited[i][j] = False

    return res