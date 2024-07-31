#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    
    vector<int> result = minPath(grid, k);
    
    for(int val : result){
        cout << val << " ";
    }
    
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    auto isValid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < n;
    };
    
    auto dfs = [&](int x, int y, int len){
        path.push_back(grid[x][y]);
        if(len == k){
            return;
        }
        vector<pair<int, int>> neighbors;
        for(auto dir : dirs){
            int nx = x + dir[0];
            int ny = y + dir[1];
            if(isValid(nx, ny)){
                neighbors.push_back({nx, ny});
            }
        }
        sort(neighbors.begin(), neighbors.end(), [&](const pair<int, int>& a, const pair<int, int>& b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        for(auto neighbor : neighbors){
            dfs(neighbor.first, neighbor.second, len + 1);
        }
    };
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            dfs(i, j, 1);
        }
    }
    
    return path;
}