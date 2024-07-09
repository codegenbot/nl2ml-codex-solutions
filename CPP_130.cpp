#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> completeCode(int n) {
    vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    result.push_back(2);
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}