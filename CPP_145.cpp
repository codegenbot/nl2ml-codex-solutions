#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void order_by_points(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });
}