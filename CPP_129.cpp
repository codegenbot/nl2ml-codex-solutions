vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < grid.size(); j++){
            for(int l = 0; l < grid[j].size(); l++){
                result.push_back(grid[j][l]);
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}