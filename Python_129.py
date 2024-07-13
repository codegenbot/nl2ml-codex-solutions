def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    
    def dfs(x, y, curr_path):
        nonlocal path
        if len(curr_path) == k:
            if not path or curr_path < path:
                path = curr_path
            return
        
        visited[x][y] = True
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x+dx, y+dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, curr_path+[grid[x][y]])
        visited[x][y] = False
    
    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    
    return path