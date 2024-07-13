#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return std::pair<int, int>(min(nums[i], complement), max(nums[i], complement));
        }
        numIndex[nums[i]] = i;
    }
    return {};
}