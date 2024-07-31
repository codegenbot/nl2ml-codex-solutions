#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    for(int i = 0; i < k; ++i){
        for(auto& row : grid){
            for(int num : row){
                path.push_back(num);
            }
        }
    }
    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}