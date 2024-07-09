from collections import deque


def minFallingRainWater(grid):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]

    def dfs(i, j, path, visited):
        if (i, j) == (n - 1, n - 1):
            return path

        visited.add((i, j))

        min_path = path[:]
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if (
                0 <= ni < n
                and 0 <= nj < n
                and (ni, nj) not in visited
                and grid[ni][nj] == "1"
            ):
                new_path = dfs(ni, nj, path + [str(grid[ni][nj])], visited.copy())
                if new_path:
                    min_path = new_path

        return min_path

    for i in range(n):
        for j in range(n):
            grid[i][j] = str(grid[i][j])

    start = [i for i, row in enumerate(map(str, grid)) if "1" in "".join(row)][0]
    path = dfs(0, 0, [grid[0][0]], set())

    return path