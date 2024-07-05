#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(const vector<vector<int>> &lst, int x) {
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

bool issame(const vector<vector<int>> &a, const vector<vector<int>> &b) {
    return a == b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    assert(issame(get_row({{3}, {2, 3}, {1, 2, 3, 4}}, 2), {{1, 0}, {2, 1}})); // Added more test to ensure correctness
    cout << "All tests passed!" << endl;
    return 0;
}