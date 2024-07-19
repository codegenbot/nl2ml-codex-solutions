bool issame(vector<int> a, vector<int> b){
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i=0; i<k; i++){
        for(int j=0; j<grid.size(); j++){
            for(int m=0; m<grid[j].size(); m++){
                result.push_back(grid[j][m]);
            }
        }
    }
    return result;
}

int main(){
    assert(issame(minPath({{1, 3}, {3,2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}