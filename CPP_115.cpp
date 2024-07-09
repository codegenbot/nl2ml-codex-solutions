```cpp
#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int col : row) {
            if (col == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    if (total_water % capacity > 0) {
        buckets_needed++;
    }

    return buckets_needed;
}