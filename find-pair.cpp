#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        auto it = nums.begin() + i;
        while (it != nums.end()) {
            if (*it + *(it - 1) == target) {
                result.push_back({std::min(*it, *(it - 1)), std::max(*it, *(it - 1))});
                it++;
            } else if ((it + 1) != nums.end() && *it + *(it + 1) > target) {
                it = nums.begin() + i; 
            } else {
                it++;
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    // print or use result as needed
    return 0;
}