#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>>(n, vector<bool>(n, false)) visited;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                //push the value and position into pq
                pair<int, pair<int, int>> pqInfo;
                pqInfo.first = grid[i][j];
                pqInfo.second.first = i;
                pqInfo.second.second = j;
                visited[i][j] = true;
                queue<pair<int, pair<int, int>>> myQueue;
                myQueue.push(pqInfo);
            }
        }
    }

    vector<int> res;

    while (!myQueue.empty()) {
        int val = myQueue.back().first;
        int x = myQueue.back().second.first;
        int y = myQueue.back().second.second;
        res.push_back(val);
        myQueue.pop();

        if (k > 0) {
            --k;

            for (int dx : {-1, 0, 1}) {
                for (int dy : {-1, 0, 1}) {
                    int nx = x + dx;
                    int ny = y + dy;

                    if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        myQueue.push({grid[nx][ny], {nx, ny}});
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

    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
}