#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!res.size() || grid[i][j] <= res.back()) {
                res.push_back(grid[i][j]);
                if (res.size() == k) return res;
            }
        }
    }
    return res;
}