#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvector2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << "\n";
    }
    for (int num : subvector2) {
        std::cout << num << "\n";
    }
    
    return 0;
}