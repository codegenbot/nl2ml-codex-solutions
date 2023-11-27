#include <vector>
#include <cassert>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int buckets_needed = (grid[i][j] + capacity - 1) / capacity;
                count += buckets_needed;
            }
        }
    }
    
    return count;
}

int main() {
    assert (max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    
    return 0;
}