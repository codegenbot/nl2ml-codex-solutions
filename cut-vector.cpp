#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + split_index);
    vector<int> right(v.begin() + split_index, v.end());
    
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
    
    cout << "[";
    for (int i = 0; i < result.first.size() - 1; i++) {
        cout << result.first[i] << " ";
    }
    cout << result.first.back() << "]\n[";
    for (int i = 0; i < result.second.size() - 1; i++) {
        cout << result.second[i] << " ";
    }
    cout << result.second.back() << "]\n";
    
    return 0;
}