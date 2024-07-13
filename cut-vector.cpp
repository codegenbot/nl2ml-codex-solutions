#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        
        long long rightSum = 0;
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(i == 0 || diff < abs(leftSum - accumulate(v.begin(), v.end(), 0))) {
            res[0] = vector<int>(v.begin(), v.end());
            res[1].clear();
            return res;
        }
    }
    
    long long totalSum = accumulate(v.begin(), v.end(), 0);
    int left = 0, right = 0;
    for(int i = 0; i < n; i++) {
        totalSum -= v[i];
        if(totalSum == 0) {
            res[0] = vector<int>(v.begin(), v.begin() + i+1);
            res[1] = vector<int>(v.begin() + i+1, v.end());
            return res;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.end());
    res[1].clear();
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