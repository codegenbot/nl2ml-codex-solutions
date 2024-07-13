#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long minDiff = LLONG_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        long long leftSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        long long rightSum = 0;
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + pos+1);
    res[1] = vector<int>(v.begin() + pos+1, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}