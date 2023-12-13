#include <iostream>
#include <vector>

int findFirstNegativeIndex(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
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
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    int result = findFirstNegativeIndex(nums);
    std::cout << result << std::endl;
    
    return 0;
}