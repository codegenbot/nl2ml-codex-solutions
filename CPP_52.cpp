#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) return false;
    }
    return true;
}

int main() {
    assert (!below_threshold({1, 8, 4, 10}, 10));
    assert (below_threshold({1, 2, 3, 4}, 5));
    return 0;
}