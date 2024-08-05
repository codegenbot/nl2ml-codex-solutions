#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    std::vector<int> nums = {2, -3, 8, -1, -5};
    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}