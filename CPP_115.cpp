int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                count += grid[i][j];
                grid[i][j] = 0;
            }
        }
    }

    int buckets = count / capacity;
    if (count % capacity != 0) {
        buckets++;
    }

    return buckets;
}