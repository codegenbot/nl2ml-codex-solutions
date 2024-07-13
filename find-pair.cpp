#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<std::pair<int, int>> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<std::pair<int, int>> result = findPair(nums, target);
    if (!result.empty()) {
        for (const auto& pair : result) {
            std::cout << "The pair is: " << pair.first << ", " << pair.second << std::endl;
        }
    } else {
        std::cout << "No such pair found" << std::endl;
    }
    return 0;
}