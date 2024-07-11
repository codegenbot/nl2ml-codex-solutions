#include <utility>
#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pairs.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    sort(pairs.begin(), pairs.end());
    return pairs[0];