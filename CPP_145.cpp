#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        int sum_b = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}