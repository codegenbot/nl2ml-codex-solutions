#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}