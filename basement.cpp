#include <iostream>
#include <vector>

using namespace std;

int basement(const std::vector<int>& nums) {
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
    std::vector<int> nums = {3, -5, 2, 1, -8};
    std::cout << "First negative sum index: " << basement(nums) << std::endl;
    return 0;
}