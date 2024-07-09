#include <vector>
#include <set>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;