#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        a = (a < 0) ? -a : a;
        b = (b < 0) ? -b : b;
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });
    return nums;
}

int main() {
    std::vector<int> nums = {123, 456, 789, 321};
    nums = order_by_points(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}