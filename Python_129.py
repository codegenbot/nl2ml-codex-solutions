def minPath(k):
    n = int(input("Enter the number of rows in the grid: "))
    m = [[int(input(f"Enter value at row {i} column {j}: ")) for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return sum(path)
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path
    
    return dfs(0, 0, [], set())

print(minPath(2))