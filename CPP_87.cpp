#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j<a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

int main() {
    assert(issame(get_row({{} ,{1} , {1, 2, 3}} , 1) , {{0, 0}, {1, 0}, {2, 0}}));
    return 0;
}