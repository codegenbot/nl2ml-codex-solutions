#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    for (int i = 0; i < a.size(); ++i) {
        result[i] = a[i] - b[i];
    }
    return result;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}