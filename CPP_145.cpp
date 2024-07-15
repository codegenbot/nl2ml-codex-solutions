#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;
        while (a > 0) {
            sum_a += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sum_b += b % 10;
            b /= 10;
        }
        if (sum_a == sum_b) return a < b;
        return sum_a < sum_b;
    });
    return nums;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}