def minPath(grid, k):
    n = len(grid)

    queue = [(0, 0, [])]
    visited = set((0, 0))
    path_lengths = {}
    shortest_paths = {}

    while queue:
        x, y, path = queue.pop(0)

        if len(path) > k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                new_path = path + [grid[nx][ny]]

                if (
                    len(new_path) not in shortest_paths
                    or len(new_path) < shortest_paths[len(new_path)]
                ):
                    queue.append((nx, ny, new_path))
                    visited.add((nx, ny))
                    shortest_paths[len(new_path)] = len(new_path)

    return []