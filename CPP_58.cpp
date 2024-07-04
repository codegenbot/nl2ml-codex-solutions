#include <vector>
#include <algorithm>
#include <cassert>
#include <iterator>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({4, 3, 2, 8}, {2, 8}), {2, 8}));
    assert(issame(common({1, 2, 3, 4}, {3, 4, 5, 6}), {3, 4}));
    assert(issame(common({1, 1, 2}, {2, 2}), {2}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
    return 0;
}