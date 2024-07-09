```cpp
#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int water = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                water++;
            }
        }
    }
    return water / capacity;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
}