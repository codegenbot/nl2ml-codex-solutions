def minPath(grid):
    n = len(grid)
    m = len(grid[0])

    queue = [(0, 0, [])]
    visited = set((0, 0))
    shortest_paths = {}

    while queue:
        x, y, path = queue.pop(0)

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < m:
                new_path = path + [grid[nx][ny]]

                if len(new_path) > k:
                    continue

                if len(new_path) not in shortest_paths or len(
                    new_path
                ) < shortest_paths.get(len(new_path), float("inf")):
                    queue.append((nx, ny, new_path))
                    visited.add((nx, ny))

    return sorted(list(shortest_paths.keys()))