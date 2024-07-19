#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); ++i){
        for(int j = 0; j < lst[i].size(); ++j){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    return result;
}

int main() {
    vector<vector<int>> lst = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result = get_row(lst, 5);
    for(const auto& vec : result){
        for(int num : vec){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}