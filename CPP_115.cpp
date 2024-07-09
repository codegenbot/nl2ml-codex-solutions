int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water++;
            }
        }
    }

    return total_water / capacity + (total_water % capacity ? 1 : 0);
}