#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= min_diff) {
            min_diff = v[i] - v[0];
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << result.first[0];
    for (int i = 1; i < result.first.size(); i++) {
        cout << " ";
        cout << result.first[i];
    }
    cout << endl;
    cout << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << " ";
        cout << result.second[i];
    }
    cout << endl;
    
    return 0;
}