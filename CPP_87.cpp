#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<vector<int>> a, vector<vector<int>> b){
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        for(int j = 0; j < lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }

    std::sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });
    
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}