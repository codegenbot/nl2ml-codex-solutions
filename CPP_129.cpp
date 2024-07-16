vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for (int i = 0; i < k / grid.size(); ++i) {
        for (const auto& row : grid) {
            for (int num : row) {
                result.push_back(num);
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}