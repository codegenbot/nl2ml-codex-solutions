#include <vector>
#include <cassert>

vector<int> tri(int n) {
    vector<int> res;
    res.push_back(3);
    if (n == 0) return res;
    res.push_back(1);
    if (n == 1) return res;
    res.push_back(2);
    if (n == 2) return res;
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            res.push_back(1 + i / 2);
        } else {
            res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
        }
    }
    return res;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

assert(issame(tri(1), {1, 3}));