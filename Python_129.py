```
from typing import List
from collections import deque

def shortestPaths(grid: List[List[int]], k: int) -> list:
    result = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = deque()
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == k:
                queue.append((i, j))
    
    while queue:
        x, y = queue.popleft()
        result.append((x, y))
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]):
                if grid[nx][ny] != k:
                    queue.append((nx, ny))
    
    return result