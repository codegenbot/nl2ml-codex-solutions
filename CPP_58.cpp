#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection(s1.begin(), s1.end());
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    for (auto it = intersection.begin(); it != intersection.end(); ++it) {
        result.push_back(*it);
    }
    sort(result.begin(), result.end());
    return result;
}