#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#include <set>

using namespace std;

vector<int> solve(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

void solveProblem() {
    assert(issame(solve({4, 3, 2, 8}, {}), {}));
}

int main() {
    solveProblem();
    return 0;
}