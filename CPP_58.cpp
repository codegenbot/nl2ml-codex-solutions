#include <vector>
#include <algorithm>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
        std::vector<int> result;
        for (const auto& elem : a) {
            if (std::find(b.begin(), b.end(), elem) != b.end()) {
                result.push_back(elem);
            }
        }
        return result;
    }
}