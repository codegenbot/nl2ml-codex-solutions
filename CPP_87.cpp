```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i].size() > 0 && lst[i][0] == x){
            for(int j = 0; j < lst[i].size(); j++){
                result.push_back({i, lst[i].size()-j-1});
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}