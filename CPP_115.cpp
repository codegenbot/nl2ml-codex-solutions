#include <cassert>

int calculate_buckets(const vector<vector<int>>& grid, int capacity) {
    assert(capacity > 0);

    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }

    int num_buckets = (total_water + capacity - 1) / capacity;

    return num_buckets * rows;
}