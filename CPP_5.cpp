#include <vector>
#include <algorithm>

std::vector<int> intersperse(const std::vector<int>& vec, int val) {
    std::vector<int> result;
    for (size_t i = 0; i < vec.size(); ++i) {
        result.push_back(vec[i]);
        if (i < vec.size() - 1) {
            result.push_back(val);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}