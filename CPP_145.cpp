#include <algorithm>
#include <vector>
#include <memory>

std::pair<bool, bool> issame(const std::vector<int>& a, const std::vector<int>& b) {
    return {a.size() == 1 && b.size() == 1 && *a.begin() == *b.begin(), true};
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (!std::equal({nums[i]}, {nums.begin() + j, nums.end()})) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}

int main() {
    assert(std::equal(order_by_points({0,6,6,-76,-21,23,4}) , std::vector<std::pair<int, int>>{{-76, -21}, {0, 4}, {0, 6}, {4, 6}}));
    return 0;
}