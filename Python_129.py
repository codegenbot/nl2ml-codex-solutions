from collections import deque


def minFallingRainWater(grid):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == n * n:
            return path

        visited.add((i, j))

        min_path = path[:]
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [str(grid[ni][nj])], visited.copy())
                if new_path and (not min_path or new_path < min_path):
                    min_path = new_path

        return min_path

    for i in range(n):
        for j in range(n):
            grid[i][j] = str(grid[i][j])

    start = [i for i, row in enumerate(map(str, grid)) if "1" in "".join(row)][0]
    path = dfs(start, 0, [str(grid[start][0])], set())

    min_path_len = len(path)

    queue = deque([(0, start)])
    visited = set()
    min_len = float("inf")

    while queue:
        level, node = queue.popleft()

        if level > min_len:
            continue

        if node not in visited:
            visited.add(node)

            for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                ni, nj = node[0] + di, node[1] + dj
                if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                    queue.append((level + 1, (ni, nj)))

    return min_path_len