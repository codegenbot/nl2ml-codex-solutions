```
def minPath(grid, k):
    N = len(grid)
    directions = [(0,1), (0,-1), (1,0), (-1,0)]
    visited = [[False]*N for _ in range(N)]
    queue = [(0,0,[grid[0][0]])]
    res = []
    
    while queue:
        x,y,path=queue.pop(0)
        
        if grid[x][y] == 3:
            if not res or len(path) - 1 > k or (len(path) - 1 == k and tuple(sorted(path)) < tuple(sorted(res))):
                res = list(path[:-1])
        
        for dx,dy in directions:
            nx,ny=x+dx,y+dy
            
            if(0 <= nx < N and 0 <= ny < N and not visited[nx][ny] and grid[nx][ny] != 2):
                visited[nx][ny]=True
                queue.append((nx,ny,path+[grid[nx][ny]]))
    
    return res