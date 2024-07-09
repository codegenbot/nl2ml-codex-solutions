```cpp
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.size() < k) {
                res.push_back(grid[i][j]);
            } else {
                int val = grid[(i + 1) % n][j];
                if (res.size() < k) {
                    if (val > res[0]) {
                        res.pop_back();
                        res.insert(res.begin(), val);
                    }
                } else if (val > res[0]) {
                    res.pop_back();
                    res.insert(res.begin(), val);
                }
            }
        }
    }
    return res;
}