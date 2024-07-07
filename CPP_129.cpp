#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<bool> row(n, false);
    vector<vector<bool>> visited(n, vector<bool>(n, false)); // Initialize each row with all elements as false.
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], i, j});
                visited[i][j] = true;
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int,int> pos = {pq.top().second, pq.top().second};
        pq.pop();

        res.push_back(val);

        if (k > 0) {
            --k;

            // Check all neighbors
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = pos.first + i;
                    int nj = pos.second + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                        visited[ni][nj] = true;
                        pq.push({grid[ni][nj], ni, nj});
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}