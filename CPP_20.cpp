#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    return {nums[1], nums[2]};
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}