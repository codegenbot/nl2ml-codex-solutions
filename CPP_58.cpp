#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> findCommonElements(std::vector<int>& l1, std::vector<int>& l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(findCommonElements({4, 3, 2, 8}, {}), {}));
}