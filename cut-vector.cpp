#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{v.begin(), v.begin() + cut_index}, {v.begin() + cut_index, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}