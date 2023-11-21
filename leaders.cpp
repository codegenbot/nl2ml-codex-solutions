#include <vector>
#include <iostream>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int max = INT_MIN;

    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= max) {
            leaders.push_back(nums[i]);
            max = nums[i];
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::vector<int> nums;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    std::vector<int> result = findLeaders(nums);

    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}