def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                path.append(m[ni][nj])
                visited.add(m[ni][nj])
                res = dfs(ni, nj, path, visited)
                if res:
                    return res
                path.pop()
                visited.remove(m[ni][nj])
        return None

    for i in range(n):
        for j in range(n):
            path = [m[i][j]]
            visited = {m[i][j]}
            res = dfs(i, j, path, visited)
            if res:
                return res