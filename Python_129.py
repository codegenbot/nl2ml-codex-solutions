def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [])]  # (row, col, path)

    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k and "A" not in path:
            return []

        for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nr, nc = row + dr, col + dc
            if 0 <= nr < N and 0 <= nc < N and not visited[nr][nc]:
                queue.append((nr, nc, path + [grid[nr][nc]]))
                visited[nr][nc] = True

    return []