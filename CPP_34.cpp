#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> removeDuplicates(const std::vector<int>& l) {
    std::vector<int> uniqueElements = l;
    sort(uniqueElements.begin(), uniqueElements.end());
    uniqueElements.erase(std::unique(uniqueElements.begin(), uniqueElements.end()), uniqueElements.end());
    return uniqueElements;
}

int main() {
    assert(issame(removeDuplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}