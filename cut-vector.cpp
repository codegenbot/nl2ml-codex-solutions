#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i+1]);
        
        if(diff <= min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(pos + 1);
    result[1].resize(v.size() - pos - 1);
    
    copy(v.begin(), v.begin() + pos + 1, result[0].begin());
    copy(v.begin() + pos + 1, v.end(), result[1].begin());
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for(auto &v : res) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}