#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxNum = nums.back();
    leaders.push_back(maxNum);
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            maxNum = nums[i];
            leaders.push_back(maxNum);
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