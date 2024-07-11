def shortestPathLength(grid):
    rows, cols = len(grid), len(grid[0])
    minPathLength = float("inf")

    def dfs(row, col, path_length):
        nonlocal minPathLength
        if path_length > minPathLength:
            return

        if path_length < minPathLength:
            minPathLength = path_length

        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            new_row, new_col = row + dx, col + dy
            if 0 <= new_row < rows and 0 <= new_col < cols:
                if grid[new_row][new_col] == 0:
                    dfs(new_row, new_col, path_length + 1)

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                dfs(row, col, 0)
    return minPathLength