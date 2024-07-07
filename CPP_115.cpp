Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::count(row.begin(), row.end(), 1);
    }
    
    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0)
        buckets_needed++;
    
    return buckets_needed;
}