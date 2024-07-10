#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto it = std::remove(lst.begin(), lst.end(), min_val);
        lst.erase(it, lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            it = std::remove(lst.begin(), lst.end(), max_val);
            lst.erase(it, lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(std::vector<int>({1, 2, 3}), strange_sort_vector({1, 2, 3})));
    return 0;
}