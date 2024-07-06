#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [x](int y){ return count(b.begin(), b.end(), y) > 0; });
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}