#include <vector>
#include <algorithm>

namespace MyNamespace {
    bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin());
    }

    std::vector<std::vector<int>> MyNamespace::largest_smallest_integers(std::vector<int> lst) {
        int max_negative = 0;
        int min_positive = INT_MAX;

        for(int i : lst) {
            if(i < 0 && i > max_negative) {
                max_negative = i;
            } else if(i > 0 && i < min_positive) {
                min_positive = i;
            }
        }

        return {{std::max(max_negative, (int)0), std::min(min_positive, (int)1)}};
    }
}

int main() {
    assert(MyNamespace::isSame(MyNamespace::largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}