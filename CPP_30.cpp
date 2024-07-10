#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}