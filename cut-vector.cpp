```c++
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        int min_diff = INT_MAX;
        int cut_idx = -1;

        for (int j = 1; j <= i; j++) {
            int diff = vec[i] - vec[0];
            if (diff == (vec[j-1] - vec[0])) {
                res[0] = vector<int>(vec.begin(), vec.begin() + i);
                res[1] = vector<int>(vec.begin() + i, vec.end());
                return res;
            }
            int side_diff = diff - (vec[j-1] - vec[0]);
            if (abs(side_diff) < abs(min_diff)) {
                min_diff = side_diff;
                cut_idx = j;
            }
        }

        if (i == n - 1 || abs(vec[i+1] - vec[0]) > abs(min_diff)) {
            res[0] = vector<int>(vec.begin(), vec.begin() + cut_idx);
            res[1] = vector<int>(vec.begin() + cut_idx, vec.end());
            return res;
        }
    }

    res[0] = vector<int>(vec.begin(), vec.end());
    res[1] = {};
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "] [";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]\n";
    return 0;
}