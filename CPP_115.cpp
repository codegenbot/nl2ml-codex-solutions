int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    int operations = buckets_needed + (remaining_water > 0 ? 1 : 0);
    
    return operations;
}