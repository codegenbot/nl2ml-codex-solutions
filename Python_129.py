def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    queue = [(0, [m[0][0]])]
    while queue:
        (x, path) = queue.pop(0)
        if len(path) == k:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if (
                0 <= nx < n
                and 0 <= ny < n
                and m[nx][ny] not in path
                and (nx, ny) not in visited
            ):
                queue.append(((nx, ny), path + [m[nx][ny]]))
        visited.add((x, y))
    return []