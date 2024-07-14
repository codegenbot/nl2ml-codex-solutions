#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] >= nums[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(nums[i]);
    }
    return res;
}