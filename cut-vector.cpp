#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = numeric_limits<int>::max();
    int index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + index + 1);
    vector<int> right(v.begin() + index, v.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;
}