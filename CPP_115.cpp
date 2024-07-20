Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int result = 0;
    
    for(int i = 0; i < n; i++) {
        int total_water = 0;
        for(int j = 0; j < grid[0].size(); j++) {
            if(grid[i][j] == 1) 
                total_water++;
        }
        
        while(total_water > 0) {
            total_water -= capacity;
            result++;
            
            if(total_water >= 0)
                continue;
            else
                break;
        }
    }
    
    return result;
}