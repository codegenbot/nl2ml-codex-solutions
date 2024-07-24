vector<int> minPath(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    vector<vector<bool>> visited(N, vector<bool>(N));
    vector<int> res;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                res = minPath(res, path);
            }
        }
    }
    return res;
}

vector<int> minPath(vector<int>& a, vector<int>& b) {
    for (int i = 0; i < min(a.size(), b.size()); ++i) {
        if (a[i] < b[i]) {
            return a;
        } else if (a[i] > b[i]) {
            return b;
        }
    }
    return (a.size() <= b.size()) ? a : b;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>& path) {
    if (k == 0) {
        return;
    }
    visited[i][j] = true;
    path.push_back(grid[i][j]);
    for (int x = -1; x <= 1; ++x) {
        for (int y = -1; y <= 1; ++y) {
            int ni = i + x, nj = j + y;
            if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size() && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k - 1, path);
                if (path.size() == k) {
                    return;
                }
            }
        }
    }
    visited[i][j] = false;
}