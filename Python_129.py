def minPathSum(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return sum(path)
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                new_path.sort()
                if min_path is None or sum(new_path) < sum(min_path):
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [], set())
            if min_path is None or sum(path) < sum(min_path):
                min_path = path
    return grid_sum(grid)


def grid_sum(grid):
    return sum(sum(row) for row in grid)