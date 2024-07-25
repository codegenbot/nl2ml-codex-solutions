#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    // Add more test cases if needed
    return 0;
}