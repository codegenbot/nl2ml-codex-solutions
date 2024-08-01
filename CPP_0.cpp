#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> nums = numbers;
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (std::abs(nums[i] - nums[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::assert(has_close_elements(std::vector<float>{1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false); // Added std:: in front of assert
    std::assert(has_close_elements(a, 0.5) == true); // Added std:: in front of assert
    return 0;
}