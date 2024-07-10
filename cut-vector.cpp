#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] - v[i-1] < min_diff) {
            min_diff = v[i] - v[i-1];
            idx = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + idx), vector<int>(v.begin() + idx, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0 ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}