```cpp
#include <vector>
#include <assert>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> b) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2;
    for(int x : b) {
        s2.insert(x);
    }
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end()); 
    return result;
}