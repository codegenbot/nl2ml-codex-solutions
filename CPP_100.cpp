#include <vector>
#include <cassert>

namespace contest {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> make_a_pile(int n) {
        std::vector<int> result;
        for (int i = 0; i < n; ++i) {
            result.push_back(8 + 2 * i);
        }
        return result;
    }

    int contest_main() {
        assert(issame(contest::make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
        return 0;
    }
}