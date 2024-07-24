#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    int n = nums.size();
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}