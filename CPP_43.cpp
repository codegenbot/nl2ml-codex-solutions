#include <vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto it = s.begin(); it != s.end(); ++it) {
        int complement = -(*it);
        if (s.find(complement) != s.end()) {
            return true;
        }
    }
    return false;
}