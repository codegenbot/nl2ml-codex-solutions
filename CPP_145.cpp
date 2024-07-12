#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int tempA = std::abs(a), tempB = std::abs(b);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
        if (sumA == sumB) {
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}

int main() {
    std::vector<int> input = {0, 6, 6, -76, -21, 23, 4};
    std::vector<int> result = order_by_points(input);
    assert(issame(result, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}