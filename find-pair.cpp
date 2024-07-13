#include <vector>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;

    for (int num : nums) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return {complement, num};
        }
        map[num] = 1;
    }

    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    if(result.first != -1 && result.second != -1) {
        std::cout << "The pair of numbers that sum to the target is: (" << result.first << ", " << result.second << ")";
    } else {
        std::cout << "No such pair found.";
    }
    return 0;
}