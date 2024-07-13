#include <iostream>
#include <unordered_map>
#include <vector>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {(int)-1, (int)-1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first == -1 && result.second == -1) {
        std::cout << "No pair found." << std::endl;
    } else {
        std::cout << "Pair found: (" << result.first << ", " << result.second << ")" << std::endl;
    }
}.