int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            wells[i] += grid[i][j];
        }
    }
    
    int ans = 0;
    while (true) {
        bool changed = false;
        vector<int> new_wells(wells);
        
        for (int i = 0; i < n; i++) {
            if (new_wells[i] >= capacity) {
                new_wells[i] -= capacity;
                ans++;
                changed = true;
            }
        }
        
        if (!changed) break;
        wells = new_wells;
    }
    
    return ans;
}