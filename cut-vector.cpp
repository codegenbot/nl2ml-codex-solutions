#include <vector>
#include <iostream>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Calculate the sum of all numbers in the vector
    for (int i = 0; i <= n-1; i++) {
        rightSum += nums[i];
    }

    // Iterate through each index and find the cut index with minimum difference
    for (int i = 0; i <= n-1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);

        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());

    if(cutIndex == -1) {
        cutIndex = n-1;
    }

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }

    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }

    return 0;
}