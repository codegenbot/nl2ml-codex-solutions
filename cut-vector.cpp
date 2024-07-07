```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    auto res = cutVector(vec);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for(auto num:res[i])cout<<num<<" ";
        if(i < res.size() - 1) cout << "], [";
        else cout << "]";
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
}