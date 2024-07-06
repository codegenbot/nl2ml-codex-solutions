def minPath(grid, k):
    n = len(grid)

    queue = [(0, 0, [])]
    visited = set((0, 0))

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    return []