#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > v[0]) return v[i];
    }
    return -1;
}

int main() {
    cout << next_smallest({-35, 34, 12, -45}) << endl;
    return 0;
}