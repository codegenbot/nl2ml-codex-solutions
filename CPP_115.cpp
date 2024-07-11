int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); j++) {
        int total_water = 0;
        for (int i = 0; i < grid.size(); i++) {
            total_water += grid[i][j];
        }
        count += total_water / capacity;
        if (total_water % capacity != 0) {
            count++;
        }
    }
    return count;
}