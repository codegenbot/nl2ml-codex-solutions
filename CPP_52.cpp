```
#include <vector>
bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}
assert(below_threshold({1, 8, 4, 10}, 10) == false);