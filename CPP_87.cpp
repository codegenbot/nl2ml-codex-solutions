#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row;
        for (int j = lst[i].size() - 1; j >= 0; --j) {
            if (lst[i][j] == x) {
                row.push_back(j);
            }
        }
        for (int col : row) {
            result.push_back({i, col});
        }
    }
    return result;
}

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    cout << "Test passed." << endl;
    return 0;
}