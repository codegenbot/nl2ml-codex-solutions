#include <cassert>
#include <vector>
#include <initializer_list>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

assert(not(below_threshold({1, 8, 4, 10}, 10)));