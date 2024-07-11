```
def max_water(n, m):
    row_values = list(map(int, input(f"Enter {n} row values separated by space: ").split()))
    column_values = list(map(int, input(f"Enter {m} column values separated by space: ").split()))
    
    grid = [[0] * (m+1) for _ in range(n+1)]
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            left_min = min(column_values[:j])
            right_min = min(column_values[j:])
            top_min = min(row_values[:i])
            bottom_min = min(row_values[i:])
            grid[i][j] = min(left_min, right_min, top_min, bottom_min)
            
    total_water = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            width = grid[i][j]
            left_width = j - 1 if column_values[j-1] >= width else 0
            right_width = m - j if column_values[m-j] >= width else 0
            top_width = i - 1 if row_values[i-1] >= width else 0
            bottom_width = n - i if row_values[n-i] >= width else 0
            
            total_water += min(left_width, right_width, top_width, bottom_width)
                
    return total_water

print(max_water(int(input("Enter the number of rows: ")), int(input("Enter the number of columns: "))))