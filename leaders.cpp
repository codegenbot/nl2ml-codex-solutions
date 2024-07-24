#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    if (n == 0) {
        return leaders;
    }

    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            leaders.push_back(nums[i]);
            maxLeader = nums[i];
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
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}