```cpp
#include <algorithm>
#include <initializer_list>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());

    return {left.begin(), left.end()};