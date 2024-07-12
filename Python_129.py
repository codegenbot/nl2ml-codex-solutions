def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        paths = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                m[ni][nj] += 1
                paths.append(dfs(ni, nj, path + [m[ni][nj]]))
                m[ni][nj] -= 1
        return min(paths) if paths else []

    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    return dfs(0, 0, [m[0][0]])