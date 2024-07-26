#include <vector>
#include <cassert>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); j++) {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            sum += grid[i][j];
        }
        count += (sum / capacity) + (sum % capacity != 0);
    }
    return count;
}