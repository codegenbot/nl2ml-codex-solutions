def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_path = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]])
                if min_path is None or new_path < min_path:
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(N):
        for j in range(N):
            if len(dfs(i, j, [])) == k:
                return dfs(i, j, [])