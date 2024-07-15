#include <vector>
#include <iostream>
#include <utility>
#include <climits>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    if (v.size() == 1) {
        pair<vector<int>, vector<int>> result;
        result.first = v;
        result.second = {};
        return result;
    }
    
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); ++i) {
        if (v.size() % 2 == 0 && i == v.size() / 2) {
            continue;
        }
        
        int leftSum = accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    pair<vector<int>, vector<int>> result;
    result.first = vector<int>(v.begin(), v.begin() + splitIndex);
    result.second = vector<int>(v.begin() + splitIndex, v.end());
    
    return result;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "1 ";
    for (auto x : result.first) cout << x << " ";
    cout << "\n" << result.first.size() << "\n";
    cout << "1 ";
    for (auto x : result.second) cout << x << " ";
    cout << "\n" << result.second.size() << "\n";
    
    return 0;
}