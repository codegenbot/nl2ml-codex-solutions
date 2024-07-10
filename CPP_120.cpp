#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> topKElements(std::vector<int> arr, int k) {
    if (k == 0) return {};
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(topKElements({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}