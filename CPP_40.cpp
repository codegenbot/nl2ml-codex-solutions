```
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int num : l) {
        s.insert(num);
    }
    for (int i = 0; i < s.size(); ++i) {
        int target = -s[i];
        auto it = s.find(target);
        if (it != s.end()) {
            int left = -target - s[i];
            if (find(s.begin(), it, left) != it) {
                return true;
            }
        }
    }
    return false;
}