#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> res;
    
    for (int i = n - 1; i >= 0; --i) {
        bool leader = true;
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] >= nums[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(nums[i]);
    }
    
    return res;
}