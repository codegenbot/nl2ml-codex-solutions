#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    int half = n / 2;

    for (int i = 1; i <= half; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) {
        std::vector<int> empty;
        return std::make_pair(empty, empty);
    }

    std::vector<int> left(nums.begin(), nums.begin() + index);
    std::vector<int> right(nums.begin() + index, nums.end());

    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}