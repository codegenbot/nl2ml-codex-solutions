```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<vector<int>>& v1, vector<vector<int>>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].size() != v2[i].size() || v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>>& lst, int x) {
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
    assert(issame(get_row({}, {1}, {1, 2, 3}), {{2, 2}}));
    return 0;
}