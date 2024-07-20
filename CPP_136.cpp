#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return {nums.front(), nums.back()};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), std::vector<int>{-100, 1}));
    return 0;
}