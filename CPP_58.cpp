#include <algorithm>
#include <vector>
#include <iterator>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == vector<int>());
    return 0;
}