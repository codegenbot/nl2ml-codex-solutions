```cpp
#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxNum = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            leaders.push_back(nums[i]);
            maxNum = nums[i];
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::vector<int> result = findLeaders(nums);
    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
```