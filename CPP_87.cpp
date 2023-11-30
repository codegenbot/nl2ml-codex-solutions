#include <vector> 

bool issame(vector<vector<int>> a, vector<vector<int>> b); 

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](vector<int>& a, vector<int>& b){
        if(a[0] != b[0]){
            return a[0] < b[0];
        }
        return a[1] > b[1];
    });
    return result;
}

bool issame(vector<vector<int>> a, vector<vector<int>> b){ 
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3) , {{2, 2}})); 
    return 0;
}