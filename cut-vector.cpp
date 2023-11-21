#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <cstdlib>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int> &nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff <= diff) {
            diff = currentDiff;
            index = i + 1;
            if (currentDiff == 0) {
                break;
            }
        }
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
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (int num : result.second) {
        std::cout << num << " ";
    }

    return 0;
}