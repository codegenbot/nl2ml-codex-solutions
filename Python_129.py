def minPathSum(m):
    n = len(m)

    def dfs(i, j, path):
        if len(path) == 1:
            return path
        min_path = []
        queue = [(i, j, path)]
        while queue:
            ni, nj, new_path = queue.pop(0)
            for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                ni2, nj2 = ni + x, nj + y
                if 0 <= ni2 < n and 0 <= nj2 < n and m[ni2][nj2] % n + nj2 < m[i][j]:
                    new_path2 = new_path + [m[ni2][nj2]]
                    if len(min_path) == 0 or len(new_path2) < len(min_path):
                        min_path = new_path2
        return min_path

    k, n = map(int, input("Enter the value of k and n: ").split())
    m = []

    for i in range(n):
        row = list(map(int, input(f"Enter the row {i+1}: ").split()))
        m.append(row)

    min_path = []
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if len(min_path) == 0 or len(path) < len(min_path):
                min_path = path
    return min_path


print(minPathSum([[1], [2]]))