#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}