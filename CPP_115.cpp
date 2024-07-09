int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water++;
            }
        }
    }

    int steps = -(-total_water / capacity);
    return steps;
}