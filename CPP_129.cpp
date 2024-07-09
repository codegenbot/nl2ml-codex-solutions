bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, res);
            }
        }
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& res) {
    int n = grid.size();
    if (k == 0) {
        return;
    }
    res.push_back(grid[x][y]);
    visited[x][y] = true;
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                dfs(grid, visited, nx, ny, k - 1, res);
                if(res.size() == k) {
                    return;
                }
            }
        }
    }
    visited[x][y] = false;
}