#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        if(i == 0) cout << "[";
        for(int j = 0; j < res[i].size(); j++){
            for(int k = 0; k < res[i][j].size(); k++){
                cout << res[i][j][k] << " ";
            }
            if(i < res.size() - 1) cout << "] [";
        }
    }
    cout << "]";
    return 0;
}

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || vec[i] - vec[i-1] >= 0) {
            res[0].assign(vec.begin(), vec.begin() + i + 1);
            res[1].assign(vec.begin() + i, vec.end());
            break;
        }
    }
    return res;