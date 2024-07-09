#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> lst = {{1,2,3,4,5,6}, {1,2,3,4,1,6}, {1,2,3,4,5,1}};
    int x = 1;
    vector<vector<int>> result = get_row(lst, x);
    
    for (auto row : result) {
        cout << "(" << row[0] << ", " << row[1] << ")" << endl;
    }
    
    return 0;
}