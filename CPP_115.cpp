int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                total_water += unit;
            }
        }
    }

    return (total_water + capacity - 1) / capacity;
}