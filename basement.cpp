#include <iostream>
#include <vector>

int basement(const std::vector<long long>& nums) {
    long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // If no negative sum found
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}