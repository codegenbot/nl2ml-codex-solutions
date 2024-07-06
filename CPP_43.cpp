#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int x : s) {
        if (find(s.begin(), s.end(), -x) != s.end()) {
            return true;
        }
    }
    return false;
}